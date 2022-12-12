#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;
	int r = 0;
	int max = 0;
	int ind = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 1; i <= n; i++)
	{
		std::cin >> a[i];

	}

	std::cin >> l >> r;

	for (int j = l; j <= r; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
			ind = j;
		}

	}

	std::cout << max << " " << ind;

	EXIT_SUCCESS;
}

//Some errros 