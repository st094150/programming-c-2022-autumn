#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int j = 1;
	std::cin >> n;

	do
	{
		int i = 1;
		int a = j;
		do
		{
			std::cout << a << " ";
			a++;
			i++;
		} while (i <= n);

		std::cout << std::endl;
		j++;
	} while (j <= n);

	EXIT_SUCCESS;
}
