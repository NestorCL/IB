#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Introduzca 2 ficheros" << std::endl;
        return 1;
    }

    std::string texto = argv[1];
    std::string deleted = argv[2];
    std::string tabu = argv[3];

    std::ifstream ifs(texto);
    ifs.is_open();
    if (!ifs.is_open()) {
        return 1;
    }

    std::ofstream ofs(deleted);
    ofs.is_open();
    if (!ofs.is_open()) {
        return 1;
    }


    std::string linea;
    while(getline(ifs, linea)) {
        std::string palabras;
        std::istringstream iss(linea);
        while (iss >> palabras) {
            if (palabras != tabu) {
                ofs << palabras << " ";
            }
        }
        ofs << std::endl;
    }
    
    ifs.close();
    ofs.close();
    return 0;
}