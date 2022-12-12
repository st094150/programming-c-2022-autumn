#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (k == n)
			{
				break;
			}

			std::cout << i << " ";
			k++;

		}

	}

	EXIT_SUCCESS;
}

/// Completed