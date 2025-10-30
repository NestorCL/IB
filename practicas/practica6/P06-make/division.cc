#include <iostream> 
int main() {
	int dividendo, divisor, aux;
	std::cout << "Introduzca dos valores: ";
	std::cin >> dividendo >> divisor;
	
	if (divisor > dividendo) {
		aux = dividendo;
		dividendo = divisor;
		divisor = aux;
	}
	
	if (dividendo % divisor == 0) {
		std::cout << dividendo << " es divisible entre " << divisor << "." << std::endl;
	}	else {
		std::cout << dividendo << " y " << divisor << " no son divisibles." << std::endl;
	}
	return 0;
}
