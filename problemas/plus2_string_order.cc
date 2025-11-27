#include <iostream>
#include <string>

bool Order(std::string palabra) {
	for (int i = 1; i < palabra.size(); i++) {
		if (palabra[i] - 1 > palabra[i]) {
			return false;
		}
	}
	return true;
}

std::string Fusionar(std::string palabra1, std::string palabra2) {
	std::string suma;
	std::string word1 = palabra1 + "~";
	std::string word2 = palabra2 + "~";
	suma.resize(palabra1.size() + palabra2.size());

	size_t j = 0, k = 0;
	for (size_t i = 0; i < suma.size(); i++) {
		if (word1[j] <= word2[k]) {
			suma[i] = word1[j];
			j++;
		} else {
			suma[i] = word2[k];
			k++;
		}
	}
	return suma;
}


int main(int argc, char* argv[]) {
	std::string palabra1 = argv[1];
	std::string palabra2 = argv[2];

	if (argc != 3) {
		std::cerr << "Introduzca solo 2 palabra" << std::endl;
		return 1;
	}

	if (!Order(palabra1) || !Order(palabra2)) {
		std::cerr << "Las palabras introducidas no están ordenadas" << std::endl;
		return 1;
	}

	std::string suma = Fusionar(palabra1, palabra2);
	if (Order(suma)) {
		std::cout << Fusionar(palabra1, palabra2) << " está ordenado" << std::endl;
	} else {
		std::cerr << "La fuisón no está ordenada" << std::endl;
		return 1; 
	}

	return 0;
} 
