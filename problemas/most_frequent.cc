#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

// Función para limpiar signos de puntuación y pasar a minúsculas
std::string normalizar(const std::string& palabra) {
    std::string resultado;
    for (char c : palabra) {
        if (std::isalpha(static_cast<unsigned char>(c))) {
            resultado += std::tolower(static_cast<unsigned char>(c));
        }
    }
    return resultado;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cerr << "Uso: " << argv[0] << " <ficheroEntrada> <ficheroSalida>" << std::endl;
        return 1;
    }

    std::ifstream entrada(argv[1]);
    if (!entrada) {
        std::cerr << "No se pudo abrir el fichero de entrada: " << argv[1] << std::endl;
        return 1;
    }

    std::map<std::string, int> frecuencia;
    std::string linea, palabra;

    // Leer línea por línea y dividir en palabras
    while (std::getline(entrada, linea)) {
        std::istringstream iss(linea);
        while (iss >> palabra) {
            std::string limpia = normalizar(palabra);
            if (!limpia.empty()) {
                frecuencia[limpia]++;
            }
        }
    }
    entrada.close();

    // Pasar a vector para ordenar por frecuencia
    std::vector<std::pair<std::string, int>> lista(frecuencia.begin(), frecuencia.end());
    std::sort(lista.begin(), lista.end(),
              [](const auto& a, const auto& b) {
                  return a.second > b.second; // Orden descendente por frecuencia
              });

    std::ofstream salida(argv[2]);
    if (!salida) {
        std::cerr << "No se pudo abrir el fichero de salida: " << argv[2] << std::endl;
        return 1;
    }

    // Escribir las 10 palabras más frecuentes
    int limite = std::min(10, (int)lista.size());
    for (int i = 0; i < limite; ++i) {
        salida << lista[i].first << " : " << lista[i].second << '\n';
    }

    std::cout << "Se han escrito las 10 palabras más frecuentes en " << argv[2] << std::endl;
    return 0;
}
