#include <iostream>

int main() {
	int var1, var2, var3;
	std::cout << "Введите первое число: ";
	std::cin >> var1;
	std::cout << "Введите второе число: ";
	std::cin >> var2;
	std::cout << "Введите третье число: ";
	std::cin >> var3;
	int otv1{ var1 >= var2
			? var1 >= var3
				? var1 : var3
			: var2 >= var3
				? var2 : var3
	};

	int otv2{ var1 >= var2
			? var1 >= var3
				? var3 : var1
			: var2 >= var3
				? var3 : var2
	};

	int otv3{ var1 <= var2
			? var1 <= var3
				? var1 : var3
			: var2 <= var3
				? var2 : var3
	};

	std::cout << otv1 << " " << otv2 << " " << otv3 << "\n\n\n\n";
	return EXIT_SUCCESS;
}
