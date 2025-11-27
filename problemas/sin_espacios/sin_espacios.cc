#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    std::string normal = argv[1];
    std::string nospace = argv[2];

    if (argc != 3) {
        std::cerr << "Ha de introducir 2 fichero" << std::endl;
        return 1;
    }

    std::ifstream ifs(normal);
    ifs.is_open();
    if (!ifs.is_open()) {
        return 1;
    }

    std::ofstream ofs(nospace);
    ofs.is_open();
    if (!ofs.is_open()) {
        return 1;
    }

    std::string linea;
    while (getline(ifs, linea)) {
        bool nada = true;
        for (char letra : linea) {
            if (!std::isspace(static_cast<unsigned char>(letra))) {
                nada = false;
                break;
            }
        }
        if (!nada){
            ofs << linea << std::endl;
        }
    }

    ifs.close();
    ofs.close();
    return 0;
}