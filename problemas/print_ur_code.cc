#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Incluya los ficheros del prograam y donde lo quiere imprimir" << std::endl;
        return 1;
    }

    std::string programa = argv[1];

    std::ifstream ifs(programa);
    ifs.is_open();
    if (!ifs.is_open()) {
        return 1;
    }

    std::string linea;
    while (getline(ifs, linea)) {
        std::cout << linea << std::endl;
    }

    ifs.close();
    return 0;
}