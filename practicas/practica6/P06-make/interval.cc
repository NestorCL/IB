/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file interval.cc P97156
  * @author Néstor Cozzi Lorenzo alu0101705385@ull.edu.es
  * @date 16-10-2025
  * @brief Imprime los número que hay entre los 2 números que le damos
  */

#include <iostream>
	int main() {
		int min{0}, max{0};
		// std::cout << "Introduce 2 números: " ;
		std::cin >> min >> max;
		for (int i = min; i <= max - 1; i++) {
			std::cout << min << "," ;
			min += 1;
		}
		if (min == max) {
			std::cout << min << std::endl;
		}
	return 0;
	}
