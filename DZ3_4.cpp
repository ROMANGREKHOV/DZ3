#include <iostream>

int main() {
	std::string ones[] = { "ноль",
	"один",
	"два",
	"три",
	"четыре",
	"пять",
	"шесть",
	"семь",
	"восемь",
	"девять",
	"десять",
	"одиннадцать",
	"двенадцать",
	"тринадцать",
	"четырнадцать",
	"пятнадцать",
	"шестнадцать",
	"семнадцать",
	"восемнадцать",
	"девятнадцать",
	};
	std::string tens[] = { 
	"двадцать",
	"тридцать",
	"сорок",
	"пятьдесят",
	"шестьдесят",
	"семьдесят",
	"восемьдесят",
	"девяносто",
	};
	int var1, var2;
	std::cout << "Введите первое число: ";
	std::cin >> var1;
	std::cout << "Введите второе число: ";
	std::cin >> var2;
	std::string str1, str2;

	//Первое число
	if (abs(var1) < 100) {
		if (abs(var1) < 20) {
			str1 = ones[abs(var1)];
		}
		else if (abs(var1) >= 20) {
			str1 = tens[abs(var1) / 10 - 2];
			str1 += " ";
			str1 += ones[abs(var1) % 10];
		}
		if (var1 < 0) {
			str1 = "минус " + str1;
		}
	}
	

	//Второе число
	if (abs(var2) < 100) {
		if (abs(var2) < 20) {
			str2 = ones[abs(var2)];
		}
		else if (abs(var2) >= 20) {
			str2 = tens[abs(var2) / 10 - 2];
			str2 += " ";
			str2 += ones[abs(var2) % 10];
		}
		if (var2 < 0) {
			str2 = "минус " + str2;
		}
	}
	
	
	//Сравнение
	if (-100>var1 || var1>100 || -100>var2 || var2>100){
		std::cout << "Ошибка! Число(-ла) вне диапазона!" << "\n\n\n\n";
	}
	else if (var1 < var2) {
		std::cout << str1 << " меньше чем " << str2 << "\n\n\n\n";
	}
	else if (var1>var2) {
		std::cout << str1 << " больше чем " << str2 << "\n\n\n\n";
	}
	else if (var1 == var2) {
		std::cout << str1 << " равно " << str2 << "\n\n\n\n";
	}
	
	return EXIT_SUCCESS;
}
