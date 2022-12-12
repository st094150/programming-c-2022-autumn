#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	float sum = 1.0;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		float j = 1.0;
		j = j * i;
		sum = sum + 1 / j;
	}


	std::cout << sum;

	EXIT_SUCCESS;
}

//Completed