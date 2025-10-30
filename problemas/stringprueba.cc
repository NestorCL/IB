#include <iostream>
#include <string>

int main() {
	std::string numero, aux;
	std::cin >> numero;
	for (int i = numero.size() - 1; i >= 0; i--) {
		aux.push_back(numero[i]);
	}
	std::cout << aux << std::endl;
	return 0;
}
