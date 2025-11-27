#include <iostream>
#include <string>
#include <vector>

std::string LongestWord(std::vector<std::string> palabras) {
    std::string longest;
    int máximo = 0;
    for (int i = 0; i < palabras.size(); i++) {
        if (palabras[i].size() > máximo) {
            máximo = palabras[i].size();
            longest = palabras[i];
        }
    }
    return longest;
}

int main() {
    int cantidad;
    std::cout << "Introduce cuantas palabras vas a introducir: ";
    std::cin >> cantidad;
    
    std::string palabra;
    std::vector<std::string> palabras(cantidad);
    std::cout << "Introduce varias palabras: ";
    
    for (int i = 0; i < cantidad; i++) {
        std::cin >> palabra;
        palabras.push_back(palabra);
    }

    std::cout << "La palabra más larga es: " << LongestWord(palabras) << std::endl;
    return 0;    
}  

// int main() {
//     int n;
//     std::cout << "¿Cuántas palabras vas a introducir? ";
//     std::cin >> n;

//     std::string palabra;
//     std::string masLarga;
//     int longitudMax = 0;

//     std::cout << "Introduce las palabras:\n";
//     for (int i = 0; i < n; i++) {
//         std::cin >> palabra;
//         if (palabra.size() > longitudMax) {
//             longitudMax = palabra.size();
//             masLarga = palabra;
//         }
//     }

//     std::cout << "La palabra más larga es: " << masLarga << std::endl;
//     std::cout << "Tiene " << longitudMax << " caracteres." << std::endl;

//     return 0;
// }