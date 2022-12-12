#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	while (a != 0)
	{
		if ((a < 0) and (a % 2 == -1))
		{
			b++;
		}
		std::cin >> a;
	}
	std::cout << b;
	EXIT_SUCCESS;
}
