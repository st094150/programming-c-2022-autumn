#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;
	int b = 0;

	std::cin >> x;

	a = x * x;
	b = a * a;

	std::cout << b + b / x + a + x + 1;

	return EXIT_SUCCESS;
}