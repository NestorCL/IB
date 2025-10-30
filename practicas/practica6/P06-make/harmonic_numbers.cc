/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file harmonic_numbers.cc P59539
  * @author Néstor Cozzi Lorenzo alu0101705385@ull.edu.es
  * @date 17-10-2025
  * @brief El programa calcula el número armónico dependiendo de un número que el demos
  */

#include <iostream>
#include <iomanip>
	int main() {
		int num;
		double harm{0.0}, aux;
		// std::cout << "Introduce un número, para calcular su armónico: " ;
		std::cin >> num;
		if (num < 0) {
			std::cout << "El número ha de ser positivo" << std::endl;
			return 1;
		}
		for (int i = 1; i <= num; i++) {
			harm += 1.0 / i;
		}
		std::cout << std::fixed << std::setprecision(4) << harm << std::endl;
		return 0;
	}
