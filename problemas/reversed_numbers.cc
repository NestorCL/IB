#include <iostream>
#include <string>

int main(){
    int n, aux;
    std::string numero, reversed;
    std::cin >> numero;

    for (int i = numero.size() - 1; i >= 0; i--) {
        reversed.push_back(numero[i]);
    }
    std::cout << reversed << std::endl;
    return 0;
}