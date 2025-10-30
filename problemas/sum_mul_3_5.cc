#include <iostream>
int main() {
	int aux{0}, rango;
	std::cout << "Introduce el rango de múltiplos a sumar: ";
	std::cin >> rango;

	for (int i = 3; i < rango; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			std::cout << i << " " ;
			aux += i;
		}
	}	
	std::cout << std::endl;
	std::cout << aux << std::endl;
	return 0;
}
