#include <iostream>

int Euclides(int A, int B) {
	while (A % B != 0) {
		int aux;
		aux = A % B;
		A = B;
		B = aux;
	}
	return B;
}

int main() {
	int A, B, resto;
	std::cout << "Introduce dos números: " ;
	std::cin >> A >> B;
	std::cout << "El máximo común divisor de " << A << " y " << B << " es " <<  Euclides(A, B) << std::endl;
	return 0;
}
