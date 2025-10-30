#/!bin/bash

# Verifica que se haya proporcionado un argumento (la ruta de destino)
if [ "$#" -lt 1 ] || [ "$#" -gt 2 ]; then
    echo "Uso: $0 <ruta_destino> [archivo_principal]"
    exit 1
fi

# Ruta de destino
RUTA_DESTINO="$1"
# Archivo principal (opcional) 
PRINCIPAL_CC="$2"

# Crea el directorio si no existe
mkdir -p "$RUTA_DESTINO"

# Si no se proporciona archivo principal, usar el primero encontrado
if [ -z "$PRINCIPAL_CC" ]; then 
	PRINCIPAL_CC=$(ls *.cc | head -n 1) 
fi

# Si no se encuentra ningún archivo .cc, mostrar un mensaje de error 
if [ -z "$PRINCIPAL_CC" ]; then 
	echo "No se encontró ningún archivo .cc en el directorio actual."
	exit 1 
fi

# Obtener el nombre base del archivo principal sin extensión
BASENAME=$(basename "$PRINCIPAL_CC" .cc)

# Obtener la fecha actual 
DATE=$(date +"%b %d, %Y")

# Contenido del Makefile para múltiples archivos
MAKEFILE_CONTENT="
# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica 2025-2026
#
# @$PRINCIPAL_CC
# @author Néstor Cozzi Lorenzo
# @date $DATE
# @brief A Makefile example for simple C++ programs
# 

CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
TARGET = $BASENAME  # Cambia el nombre del ejecutable según lo necesites

# Todos los archivos .cc en el directorio actual
SRC = \$(wildcard *.cc)
OBJ = \$(SRC:.cc=.o)

all: \$(TARGET)

\$(TARGET): \$(OBJ)
	\$(CXX) -o \$(TARGET) \$(OBJ)

%.o: %.cc
	\$(CXX) \$(CXXFLAGS) -c \$< -o \$@

clean:
	rm -f \$(OBJ) \$(TARGET)
"

# Guarda el Makefile en la ruta destino
echo "$MAKEFILE_CONTENT" > "$RUTA_DESTINO/Makefile"

echo "Makefile generado en $RUTA_DESTINO/Makefile"
