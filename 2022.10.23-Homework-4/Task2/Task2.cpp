#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;

	std::cin >> n;

	for (int i = 1; n!=0; i=i*2)
	{
		x = x + n % 10 * i;
		n = n / 10;
	}

	std::cout << x;

	EXIT_SUCCESS;
}

//Completed