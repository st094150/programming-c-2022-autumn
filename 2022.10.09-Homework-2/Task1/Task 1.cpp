#include <iostream>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;
	switch (a)
	{
	case 0:
		break;
	case 1:
		std::cout << "Сто ";
		break;
	case 2:
		std::cout << "Двести ";
		break;
	case 3:
		std::cout << "Триста ";
		break;
	case 4:
		std::cout << "Четыреста ";
		break;
	case 5:
		std::cout << "Пятьсот ";
		break;
	case 6:
		std::cout << "Шестьсот ";
		break;
	case 7:
		std::cout << "Семьсот ";
		break;
	case 8:
		std::cout << "Восемьсот ";
		break;
	case 9:
		std::cout << "Девятьсот ";
		break;
	}
	switch (b)
	{
	case 0:
		break;
	case 1:
		switch (c)
		{
		case 1:
			std::cout << "Одиннадцать ";
			break;
		case 2:
			std::cout << "Двенадцать ";
			break;
		case 3:
			std::cout << "Тринадцать ";
			break;
		case 4:
			std::cout << "Четырнадцать ";
			break;
		case 5:
			std::cout << "Пятнадцать ";
			break;
		case 6:
			std::cout << "Шестнадцать ";
			break;
		case 7:
			std::cout << "Семнадцать ";
			break;
		case 8:
			std::cout << "Восемнадцать ";
			break;
		case 9:
			std::cout << "Девятнадцать ";
			break;
		case 0:
			std::cout << "Десять ";

		}
		std::cout << "Бананов";
		return 0;
	case 2:
		std::cout << "Двадцать ";
		break;
	case 3:
		std::cout << "Тридцать ";
		break;
	case 4:
		std::cout << "Сорок ";
		break;
	case 5:
		std::cout << "Пятьдесят ";
		break;
	case 6:
		std::cout << "Шестьдесят ";
		break;
	case 7:
		std::cout << "Семьдесят ";
		break;
	case 8:
		std::cout << "Восемьдесят ";
		break;
	case 9:
		std::cout << "Девяносто ";
		break;
	}
	switch (c)
	{
	case 0:
		break;
	case 1:
		std::cout << "Один банан";
		break;
	case 2:
		std::cout << "Два банана";
		break;
	case 3:
		std::cout << "Три банана";
		break;
	case 4:
		std::cout << "Четыре банана";
		break;
	case 5:
		std::cout << "Пять бананов";
		break;
	case 6:
		std::cout << "Шесть бананов ";
		break;
	case 7:
		std::cout << "Семь бананов";
		break;
	case 8:
		std::cout << "Восемь бананов";
		break;
	case 9:
		std::cout << "Девять бананов";
		break;
	}
	return EXIT_SUCCESS;
}
