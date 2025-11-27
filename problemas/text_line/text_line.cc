#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    std::string texto = argv[1];
    std::string lineado = argv[2];
    
    std::ifstream ifs(texto);
    ifs.is_open();

    std::ofstream ofs(lineado);
    ofs.is_open();

    std::string linea;
    int numlinea(1);
    while (getline(ifs, linea)) {
        ofs << numlinea << " " << linea << std::endl;
        numlinea += 1;
    }

    ifs.close();
    ofs.close();
    return 0;
}