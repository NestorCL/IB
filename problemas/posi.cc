#include <iostream>

std::string Substring(std::string palabra, int position, int lenght) {
	std::string result;

	if (position >= palabra.size()) {
		return "";
	}
	
	if (position > lenght) {
		lenght += position;
	}

	for(int i = position; i < lenght + 1; i++) {
		if (i == palabra.size()) {
			break;
		}
		result.push_back(palabra[i]);
	}
	return result;
}

int main(int argc, char* argv[]) {
	std::string word(argv[1]);
	int posicion = std::stoi(argv[2]);
	int longitud = std::stoi(argv[3]);
	std::cout << Substring(word, posicion, longitud) << std::endl;
	return 0;
}


