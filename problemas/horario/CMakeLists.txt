# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Néstor Cozzi Lorenzo
# @date dic 04, 2025
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
project(horario                # Mandatory
  VERSION 1.0
  DESCRIPTION "Descripción del proyecto"
  LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/include)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files (now in include)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Automatically find ALL .cc files in src directory and .h in include
file(GLOB_RECURSE SOURCES "src/*.cc")
file(GLOB_RECURSE HEADERS "include/*.h")

# Check if we found any source files
list(LENGTH SOURCES NUM_SOURCES)
if(NUM_SOURCES EQUAL 0)
  message(FATAL_ERROR "No .cc files found in src directory!")
else()
  message(STATUS "Found ${NUM_SOURCES} source files")
endif()

# Adds an executable target built from ALL source files
add_executable(horario
  ${SOURCES}
  ${HEADERS})

# Add expected compiler features to a target.
target_compile_features(horario PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(horario PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

############################################################
# Build doxygen from CMake script
# https://stackoverflow.com/questions/34878276/build-doxygen-from-cmake-script
# https://cmake.org/cmake/help/latest/module/FindDoxygen.html
############################################################

find_package(Doxygen)
option(BUILD_DOCUMENTATION "Create and install the documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
  if(NOT DOXYGEN_FOUND)
    message(FATAL_ERROR "Doxygen is needed to build the documentation.")
  endif()

  set(doxyfile_in ${CMAKE_CURRENT_SOURCE_DIR}/horario.Doxyfile)
  set(doxyfile ${CMAKE_CURRENT_BINARY_DIR}/doxyfile)

  configure_file(${doxyfile_in} ${doxyfile} @ONLY)

  message("Doxygen build started.")

  add_custom_target(doc ALL
    COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating API documentation with Doxygen"
    VERBATIM)
endif()
