#include <iostream>
#include <sstream>
#include <fstream>
#include <string>



int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Ha de poner 2 fichero a comparar" << std::endl;
        return 1;
    }


    std::string texto1 = argv[1];
    std::string texto2 = argv[2];

    std::ifstream ifs1(texto1);
    ifs1.is_open();
    if (!ifs1.is_open()) {
    return 1;
    }
    std::ifstream ifs2(texto2);
    ifs2.is_open();
    if (!ifs2.is_open()) {
        return 1;
    }

    std::string linea1, linea2;
    bool iguales(1);
    int numlinea(1);
    while (iguales) {
        bool end1 = !getline(ifs1, linea1);
        bool end2 = !getline(ifs2, linea2);
        
        if (end1 && end2) {
            break;
        }

        getline(ifs1, linea1);
        getline(ifs2, linea2);

        if (linea1 != linea2) {
            std::cout << "Los textos difieren en la línea " << numlinea << std::endl;
            iguales = false;
            break;
        }
        numlinea += 1;
    }
    if (iguales) {
        std::cout << "Los textos son iguales" << std::endl;
    }

    ifs1.close();
    ifs2.close();
    return 0;
}