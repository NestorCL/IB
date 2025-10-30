/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file upper_lower_letters.cc P98960
  * @author Néstor Cozzi Lorenzo alu0101705385@ull.edu.es
  * @date 16-10-2025
  * @brief Cambia las letras mayúsculas a minúsculas y viceversa
  */

#include <iostream>
	int main() {
		char letra;
		int aux, mask;
		// std::cout << "Introduce una letra: " ;
		std::cin >> letra;
		mask = int(letra);
		if (mask >= 65 && mask <= 90) {
			mask += 32;
			std::cout << char(mask) << std::endl;
		} else if (mask >= 97 && mask <= 122) {
			mask -= 32;
			std::cout << char(mask) << std::endl;
		} else {
			std::cout << "No es una letra" <<std::endl;
			return 1;
		}
	return 0;
	}
