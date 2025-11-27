#include <iostream>

void Saludo(std::string nombre) {
	std::cout  << "Hola, " << nombre << std::endl;
}

int main() {
	std::string nombre;
	std::cin >> nombre;
	Saludo(nombre);
	return 0;
}
