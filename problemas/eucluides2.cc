#include <iostream>

int Euclides(int A, int B) {
	if (A < B) {
		return(Euclides(B, A));
	} else if (A % B != 0) {
		return(Euclides(B,A % B));
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
