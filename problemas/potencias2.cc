#include <iostream>
int main() {
	int expo, aux{1};
	std::cout << "Introduzca el exponente: " ;
	std::cin >> expo;
	for (int i = expo; i >= 0; --i) {
		std::cout << aux << " ";
		aux *= 2;
	}
	std::cout << std::endl;
	return 0;
}
