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
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
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
			std::cout << "����������� ";
			break;
		case 2:
			std::cout << "���������� ";
			break;
		case 3:
			std::cout << "���������� ";
			break;
		case 4:
			std::cout << "������������ ";
			break;
		case 5:
			std::cout << "���������� ";
			break;
		case 6:
			std::cout << "����������� ";
			break;
		case 7:
			std::cout << "���������� ";
			break;
		case 8:
			std::cout << "������������ ";
			break;
		case 9:
			std::cout << "������������ ";
			break;
		case 0:
			std::cout << "������ ";

		}
		std::cout << "�������";
		return 0;
	case 2:
		std::cout << "�������� ";
		break;
	case 3:
		std::cout << "�������� ";
		break;
	case 4:
		std::cout << "����� ";
		break;
	case 5:
		std::cout << "��������� ";
		break;
	case 6:
		std::cout << "���������� ";
		break;
	case 7:
		std::cout << "��������� ";
		break;
	case 8:
		std::cout << "����������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}
	switch (c)
	{
	case 0:
		break;
	case 1:
		std::cout << "���� �����";
		break;
	case 2:
		std::cout << "��� ������";
		break;
	case 3:
		std::cout << "��� ������";
		break;
	case 4:
		std::cout << "������ ������";
		break;
	case 5:
		std::cout << "���� �������";
		break;
	case 6:
		std::cout << "����� ������� ";
		break;
	case 7:
		std::cout << "���� �������";
		break;
	case 8:
		std::cout << "������ �������";
		break;
	case 9:
		std::cout << "������ �������";
		break;
	}
	return EXIT_SUCCESS;
}
