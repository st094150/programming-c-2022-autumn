#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int max = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];

	}

	for (int i = 1; i < n; i++)
	{
		if (max < (a[i] + a[i - 1] + a[i + 1]))
		{
			max = (a[i] + a[i - 1] + a[i + 1]);
		}
	}

	std::cout << max;

	EXIT_SUCCESS;
}

//Some errors