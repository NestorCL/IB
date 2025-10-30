/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file add1sec.cc
  * @author Néstor Cozzi Lorenzo alu0101705385@ull.edu.es
  * @date	8-10-2025
  * @brief the program adds 1 second 
  */

#include <iostream>
int main() {
	int hor, min, sec;
	std::cout << "Introduce la hora en horas, minutos y segundos: " ;
	std::cin >> hor >> min >> sec;
	sec += 1;
	if (sec == 60) {
		sec = 00;
		min += 1;
		if (min == 60) {
			min = 00;
			hor += 1;
				if (hor == 24) {
					hor = 00;
			}
		}
	}
	if (hor <= 9) {
		std::cout << "0" << hor << ":" ;
	} else {
		std::cout << hor << ":" ;
	}
	if (min <= 9) {
		std::cout << "0" << min << ":" ;
	} else {
		std::cout << min << ":" ;
	}
	if (sec <= 9) {
		std::cout << "0" << sec << std::endl;
	} else {
		std::cout << sec << std::endl;
	}

	// std::cout << hor << ":" << min << ":" << sec << std::endl;
	return 0;
}

