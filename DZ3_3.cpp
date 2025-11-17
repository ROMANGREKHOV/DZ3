#include <iostream>

int main() {
	std::string str_gender, str_sign;
	int age;
	std::cout << "Введите пол: ";
	std::cin >> str_gender;
	std::cout << "Введите знак зодиака: ";
	std::cin >> str_sign;
	std::cout << "Введите возраст: ";
	std::cin >> age;

	if (str_gender == "м" && (str_sign == "рак" || str_sign == "скорпион" || str_sign == "рыбы") && age < 40) {
		std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.\n\n\n\n";
	}
	else if (str_gender == "ж" && (str_sign == "козерог" || str_sign == "дева" || str_sign == "телец") && 15<=age<=40) {
		std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n";
		std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.\n\n\n\n";
	}
	else {
		std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n\n\n\n";
	}
	return EXIT_SUCCESS;
}