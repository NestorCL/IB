#include "libros.h"

int main(int argc, char* argv[]) {
    double tax = std::stod(argv[1]);

    Libro quijote("El Quijote de la Mancha", 1605, 21.00);
    quijote.CalculateTax(tax);
    std::cout << quijote << std::endl;
}