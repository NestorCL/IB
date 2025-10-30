#include <iostream>
int main() {
	int numero;
	std::cout << "Introduzca un número: " ;
	std::cin >> numero;
	std::cout << "La letra correspondiente al número " << numero << " es " << char(numero) << std::endl;
	return 0;
}
