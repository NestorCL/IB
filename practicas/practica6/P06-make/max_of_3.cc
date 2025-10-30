/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file max_of_3.cc P90615
  * @author Néstor Cozzi Lorenzo alu0101705385@ull.edu.es
  * @date 16-10-2025
  * @brief El programa te devuelve el mayor de los 3 números que le das
  */

#include <iostream>
	int main() {
		int num1, num2, num3, mayor;
		// std::cout << "Introduce 3 números: " ;
		std::cin >> num1 >> num2 >> num3;
		if (num1 >= num2) {
			mayor = num1;
			if (num1 >= num3) {
				std::cout << mayor << std::endl;
			} else {
				mayor = num3;
				std::cout << mayor << std::endl;
			}
		} else if (num2 >= num3) {
			mayor = num2;
			std::cout << mayor << std::endl;
		} else {
			mayor = num3;
			std::cout << mayor << std::endl;
		}
	return 0;
	}

