#include <iostream>
#include <string>

std::string Acronimos(std::string cadena) {
	std::string acronimo;
	for (int i = 0; i < cadena.size(); i++) {
		if (int(cadena[i]) > 64  && int(cadena[i]) < 91) {
			acronimo.push_back(cadena[i]);
		}
	}
	return acronimo;
}

int main(int argc, char* argv[]) {
	std::string cadena;

	for (int i = 1; i < argc; i++) {
		std::string argumento = argv[i];
		cadena += argumento;
	}

	std::cout << Acronimos(cadena) << std::endl;
	return 0;
}
