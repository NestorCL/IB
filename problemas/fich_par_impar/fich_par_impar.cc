#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

bool es_par(int numero) {
    return (numero % 2 == 0);
}

int main(int argc, char* argv[]) {
    std::string fichero_numeros, fichero_pares, fichero_impares;
    fichero_numeros = argv[1];
    fichero_impares = argv[2];
    fichero_pares = argv[3];

    std::ifstream ifs(fichero_numeros);         // ifstream = input file stream
    ifs.is_open();
    std::string linea;
    getline(ifs, linea);

    std::vector<int> numeros;
    std::istringstream iss(linea);
    int num;
    while (iss >> num) {
        numeros.push_back(num);
    }
    std::ofstream ofsp(fichero_pares);
    std::ofstream ofsi(fichero_impares);
    ofsp.is_open();
    ofsi.is_open();
    for (int i = 0; i < numeros.size(); ++i) {
        if (es_par(numeros[i])) {
            ofsp << numeros[i] << " ";
        } else {
            ofsi << numeros[i] << " ";
        }
    }
    ifs.close();
    ofsp.close();
    ofsi.close();
    return 0;
}