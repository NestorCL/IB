
# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica 2025-2026
#
# @./horario.cc
# @author Néstor Cozzi Lorenzo
# @date dic 04, 2025
# @brief A Makefile example for simple C++ programs
# 

CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
TARGET = horario  # Cambia el nombre del ejecutable según lo necesites

# Todos los archivos .cc en el directorio actual
SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

