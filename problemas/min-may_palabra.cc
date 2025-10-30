#include <iostream>
#include <string>

/*
int main() {
	std::string palabra, aux;
	std::cin >> palabra;
	for (int i = 0; i < palabra.size(); i++) {
		int letra = palabra[i];
		letra -= 32;
		aux.push_back(char(letra));
	}
	std::cout << aux << std::endl;
	return 0;
}
*/

int main() {
	std::string palabra, aux;
	int ayu;
	std::cout << "Introduce una palabra: " ;
	std::cin >> palabra;
	for (int i = 0; i < palabra.size(); i++) {
		if (int(palabra[i]) >= 97) {
			ayu = int(palabra[i]);
			ayu -= 32;
			aux.push_back(char(ayu)); // std::cout << char(ayu) ;
		} else if (int(palabra[i]) <= 90); { 
			ayu = int(palabra[i]);
			ayu += 32;
			aux.push_back(char(ayu));
		}
	}
	std::cout << aux << std::endl;
	return 0;
}
