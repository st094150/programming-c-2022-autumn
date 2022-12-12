#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int el = 0;
	int min = 1000;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; i++)
	{
		if ((abs(a[i] - x)) < min)
		{
			el = a[i];
			min = abs(a[i] - x);
		}
	}

	std::cout << el;

	EXIT_SUCCESS;
}

//Some errors 