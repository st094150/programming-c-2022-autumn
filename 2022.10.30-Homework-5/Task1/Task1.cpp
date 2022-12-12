#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int b = 0;
	int c = 0;
	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];

	}

	std::cin >> b;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == b)
		{
			c++;
		}
	}

	std::cout << c;

	EXIT_SUCCESS;
}

//completed