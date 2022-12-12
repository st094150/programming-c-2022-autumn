#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int max = 0;
	int min = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	min = a[0];
	max = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
		}
		if (a[i] <= min)
		{
			min = a[i];
		}

	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			a[i] = min;
		}
		std::cout << a[i] << " ";
	}

	EXIT_SUCCESS;
}

//completed 
