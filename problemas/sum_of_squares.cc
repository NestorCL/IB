#include <iostream>
#include <cmath>

int main() {
    int n(0);
    std::cin >> n;
int suma(0);
    for (int i = 1; i <= n; i++) {
        suma += std::pow(i, 2);
    }
    std::cout << suma << std::endl;
    return 0;
}