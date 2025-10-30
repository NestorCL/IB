#include <iostream>

	int Factorial(int numero) {
		int aux;
			for (int i = 1; i <= numero; i++) {
			aux *= i;
		}
	return aux;
	}
	
	int main() {
		int numero;
		std::cout << "Introduce un número: " ;
		std::cin >> numero;
		std::cout << "El factorial es " << Factorial(numero) << std::endl;
		return 0;
	}
