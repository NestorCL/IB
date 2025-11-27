#include <iostream>
#include <string>

std::string Combinacion(std::string palabra1, std::string palabra2) {
	std::string ambas;
	int iteraciones;
	
	if (palabra1.size() > palabra2.size()) {
		iteraciones = palabra2.size();
	} else {
		iteraciones = palabra1.size();
	}

	for (int i = 0; i < iteraciones; i++) {
		ambas.push_back(palabra1[i]);
		ambas.push_back(palabra2[i]);
	}
	return ambas;
}

int main(int argc, char* argv[]) {
	std::string palabra1(argv[1]);
	std::string palabra2(argv[2]);
	
	std::cout << Combinacion(palabra1, palabra2) << std::endl;
	return 0;
}
