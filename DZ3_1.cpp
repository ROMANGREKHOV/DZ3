#include <iostream>

int main() {
	bool value1{ true };
	bool value2{ false };
	std::cout << std::boolalpha;
	std::cout << "Оператор: || \n\n";
	std::cout << value1 << " " << value1 << " " << (value1 || value1) << '\n';
	std::cout << value2 << " " << value1 << " " << (value2 || value1) << '\n';
	std::cout << value1 << " " << value2 << " " << (value1 || value2) << '\n';
	std::cout << value2 << " " << value2 << " " << (value2 || value2) << "\n\n";

	std::cout << "Оператор: && \n\n";
	std::cout << value1 << " " << value1 << " " << (value1 && value1) << '\n';
	std::cout << value2 << " " << value1 << " " << (value2 && value1) << '\n';
	std::cout << value1 << " " << value2 << " " << (value1 && value2) << '\n';
	std::cout << value2 << " " << value2 << " " << (value2 && value2) << "\n\n\n\n";
	return EXIT_SUCCESS;
}