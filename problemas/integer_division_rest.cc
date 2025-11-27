#include<iostream> //P92351

int main() {
    int a, b, d, r;
    std::cin >> a >> b;

    if (b <= 0) {
        return 1;
    }

    d = a / b;
    r = a % b;

    if (r < 0) {
        r += b;
        d -= 1;
    }

    std::cout << d << " " << r << std::endl;
    return 0;
}