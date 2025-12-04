#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a < b) {
        int aux;
        aux = a;
        a = b;
        b = aux;
    }

    for (int i = a; i >= b; i--) {
        std::cout << i << std::endl;
    }
    return 0;
}