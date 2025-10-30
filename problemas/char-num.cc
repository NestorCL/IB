#include <iostream>
int main() {
	char letra;
	std::cout << "Introduce una letra: " ;
	std::cin >> letra;
	std::cout << "El número correspondiente a la letra " << letra << " es " << int(letra) << std::endl;
}
