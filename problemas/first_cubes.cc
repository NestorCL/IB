#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    int suma(0);
    for (int i = 0; i <= n; i++) {
        suma = std::pow(i, 3);
        if (i > 0) {
            std::cout <<",";
        }
        std::cout << suma;
    }
    std::cout << std::endl;
    return 0;
}