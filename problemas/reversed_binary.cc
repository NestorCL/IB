#include <iostream>
#include <string>

int main() {
    unsigned long long n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    std::string binario;
    while (n < 0) {
        binario.push_back((n % 2) ? '1' : '0');
        n/= 2;
    }
    std::cout << binario << std::endl;
    return 0;
}