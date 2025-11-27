#include <iostream>

int main() {
    char letra;
    std::cin >> letra;
    int aux = int(letra);

    if (aux >= 65 && aux <= 90) {
        std::cout << "uppercase" << std::endl;
        if (aux == 65 || aux == 69 || aux == 73 || aux == 79 || aux == 85) {
            std::cout << "vowel" << std::endl;
        } else {
            std::cout << "consonant" << std::endl;
        }
    } else if (aux >= 97 && aux <= 122) {
        std::cout << "lowercase" << std::endl;
        if (aux == 97 || aux == 101 || aux == 105 || aux == 111 || aux == 117) {
            std::cout << "vowel" << std::endl;
        } else {
            std::cout << "consonant" << std::endl;
        }
    }
    return 0;
}  