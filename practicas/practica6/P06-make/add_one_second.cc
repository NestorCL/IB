/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file add_one_second.cc P34279
  * @author Néstor Cozzi Lorenzo alu0101705385@ull.edu.es
  * @date 16-10-2025
  * @brief El programa muestra por pantalla la hora introducida como si fuera un reloj con un segundo extra
  */

#include <iostream>
	int main() {
		int hour{0}, min{0}, sec{0};
		// std::cout << "Introduce la hora en horas, minutos y segundo: " ;
		std::cin >> hour >> min >> sec;
		sec += 1;
		if (sec >= 60) {
			min += 1;
			sec = 0;
			if (min >= 60) {
				hour += 1;
				min = 0;
				if (hour >= 24) {
					hour = 0;
				}
			}
		}
		if (hour < 24 && min < 60 && sec < 60) {
			if (hour <= 9) {
				std::cout << "0" << hour << ":" ;
			}	else {
				std::cout << hour << ":" ;
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
		return 0;
		}
	}
