#include <iostream>
#include <string>
#include <vector>

std::string To_String(const std::vector<int>& vector) {
	std::string result = "{";
	for (int i = 0; i < vector.size(); i++) {
		result += std::to_string(vector[i]);
		if (i + 1 < vector.size()) {
			result += ", ";
		}
	}
	result += "}";
	return result;
}

int main() {
	std::vector<int> vector1(3, 7), vector2{3, 7};
	std::cout << To_String(vector1) << std::endl
						<< To_String(vector2) << std::endl
						<< To_String({3, 7}) << std::endl;
	return 0;
}
