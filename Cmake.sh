#!/bin/bash
# Verifica que se haya proporcionado el argumento necesario
if [[ "$#" -lt 1 || "$#" -gt 3 ]]; then
  echo "Usage: $0 <nombre_programa.cc> <directorio_destino> [descripción]"
  exit 1
fi

# Asigna el argumento a una variable
PROGRAMA_CC="$1"
DIRECTORIO_DESTINO="$2"
DESCRIPCION="${3:-Descripción del proyecto}"

DATE=$(date +"%b %d, %Y")

# Obtener el nombre base del archivo principal sin extensión
BASENAME=$(basename "$PROGRAMA_CC" .cc)

# Crea los directorios necesarios
mkdir -p "$DIRECTORIO_DESTINO"/{build,include,src,data}

# Mueve archivos fuente .cc al directorio src, .h a include y el resto a data
# if ls "$DIRECTORIO_DESTINO"/*.cc 1>/dev/null 2>&1; then
#   mv "$DIRECTORIO_DESTINO"/*.cc "$DIRECTORIO_DESTINO/src"
# fi
# if ls "$DIRECTORIO_DESTINO"/*.h 1>/dev/null 2>&1; then
#   mv "$DIRECTORIO_DESTINO"/*.h "$DIRECTORIO_DESTINO/include"
# fi
# if ls "$DIRECTORIO_DESTINO"/*.* 1>/dev/null 2>&1; then
#   mv "$DIRECTORIO_DESTINO"/*.* "$DIRECTORIO_DESTINO/data"
# fi

#! Mueve archivos por extensiones específicas (lo mismo de antes pero con switch)
for file in "$DIRECTORIO_DESTINO"/*; do
  if [ -f "$file" ]; then
    case "$file" in
      *.cc) mv "$file" "$DIRECTORIO_DESTINO/src/" ;;
      *.h)  mv "$file" "$DIRECTORIO_DESTINO/include/" ;;
      *)    mv "$file" "$DIRECTORIO_DESTINO/data/" ;;
    esac
  fi
done

# Nombre del proyecto 
PROJECT_NAME="$BASENAME" 

# Directorios 
SOURCE_DIR="src" 
HEADER_DIR="include"
OUTPUT_DIR="build" 
DOXYFILE="$BASENAME.Doxyfile" 

# Verificar si Doxygen está instalado 
if ! command -v doxygen &> /dev/null 
then 
  echo "Doxygen no está instalado. Instálalo e intenta de nuevo." 
  exit 1 
fi 

# Crear archivo Doxyfile si no existe 
if [ ! -f "$DOXYFILE" ]; then 
  echo "Creando archivo Doxyfile..." 
    cat <<EOL > $DOXYFILE 
# Doxyfile 
PROJECT_NAME = "$PROJECT_NAME" 
OUTPUT_DIRECTORY = "$OUTPUT_DIR" 
INPUT = "$SOURCE_DIR $HEADER_DIR" 
RECURSIVE = YES 
EOL
else 
  echo "Doxyfile ya existe." 
fi 

# Generar documentación 
echo "Generando documentación con Doxygen..." 
doxygen $DOXYFILE 
echo "Documentación generada en el directorio $OUTPUT_DIR."

# Contenido del archivo CMakeLists.txt
CMAKE_CONTENT="# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Néstor Cozzi Lorenzo
# @date $DATE
# @brief CMakeLists.txt
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.28.3)  # Mandatory

# set the project name 
project($BASENAME                # Mandatory
  VERSION 1.0
  DESCRIPTION \"${DESCRIPCION}\"
  LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH \${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH \${PROJECT_SOURCE_DIR}/include)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG \"-g -O0 -Wall -Wextra -Wpedantic -Weffc++\")
set(CMAKE_CXX_FLAGS_RELEASE \"-O3\")

# tell cmake where to look for *.h files (now in include)
include_directories(\${PROJECT_SOURCE_DIR}/include)

# Automatically find ALL .cc files in src directory and .h in include
file(GLOB_RECURSE SOURCES \"src/*.cc\")
file(GLOB_RECURSE HEADERS \"include/*.h\")

# Check if we found any source files
list(LENGTH SOURCES NUM_SOURCES)
if(NUM_SOURCES EQUAL 0)
  message(FATAL_ERROR \"No .cc files found in src directory!\")
else()
  message(STATUS \"Found \${NUM_SOURCES} source files\")
endif()

# Adds an executable target built from ALL source files
add_executable($BASENAME
  \${SOURCES}
  \${HEADERS})

# Add expected compiler features to a target.
target_compile_features($BASENAME PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options($BASENAME PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

############################################################
# Build doxygen from CMake script
# https://stackoverflow.com/questions/34878276/build-doxygen-from-cmake-script
# https://cmake.org/cmake/help/latest/module/FindDoxygen.html
############################################################

find_package(Doxygen)
option(BUILD_DOCUMENTATION \"Create and install the documentation (requires Doxygen)\" \${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
  if(NOT DOXYGEN_FOUND)
    message(FATAL_ERROR \"Doxygen is needed to build the documentation.\")
  endif()

  set(doxyfile_in \${CMAKE_CURRENT_SOURCE_DIR}/$BASENAME.Doxyfile)
  set(doxyfile \${CMAKE_CURRENT_BINARY_DIR}/doxyfile)

  configure_file(\${doxyfile_in} \${doxyfile} @ONLY)

  message(\"Doxygen build started.\")

  add_custom_target(doc ALL
    COMMAND \${DOXYGEN_EXECUTABLE} \${doxyfile}
    WORKING_DIRECTORY \${CMAKE_CURRENT_BINARY_DIR}
    COMMENT \"Generating API documentation with Doxygen\"
    VERBATIM)
endif()"

# Crea el archivo CMakeLists.txt
echo "$CMAKE_CONTENT" > "$DIRECTORIO_DESTINO/CMakeLists.txt"

# Mensaje de confirmación
echo "CMakeLists.txt generado exitosamente en $DIRECTORIO_DESTINO"
echo "Estructura de directorios:"
echo "  src/ -> Archivos .cc"
echo "  include/ -> Archivos .h"
echo "  build/ -> Ejecutable y documentación"