#include <iostream>

std::string fun(int a, int b)
{
	if (a * a > b)
	{
		return "prime";
	}
	else if (b % a == 0)
	{
		return "composite";
	}

	return fun(a+1, b);
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;
	std::cout << fun(2, n);

	return EXIT_SUCCESS;
}