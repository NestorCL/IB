#include <iostream>
int main() {
	int lado1,lado2,lado3;
	std::cout << "Introduce el lado 1: " ;
	std::cin >> lado1;
	std::cout << "Introduce el lado 2: " ;
	std::cin >> lado2;
	std::cout << "Introduce el lado 3: " ;
	std::cin >> lado3;

	if (lado1 > (lado2 + lado3) || lado2 > (lado1 + lado3) || lado3 > (lado1 + lado2)) {
		std::cout << "El triangulo no es válido" << std::endl;
	} else if (lado1 == lado2 && lado1 == lado3) {
		std::cout << "Equilátero" << std::endl;
	} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		std::cout << "Isósceles" << std::endl;
	} else {
		std::cout << "Escaleno" << std::endl;
	}

	return 0;
}

