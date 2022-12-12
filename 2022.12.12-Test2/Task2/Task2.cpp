#include <iostream>

int* fun(int k, int n, int* arr)
{
	if (k * 2 >= n)
	{
		return arr;
	}
	else
	{
		int b = arr[k];
		arr[k] = arr[n - k];
		arr[n - k] = b;
		return fun(k+1, n, arr);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	a = fun(0, n - 1, a);

	for (int j = 0; j < n; ++j)
	{
		std::cout << a[j] << " ";
	}

	return EXIT_SUCCESS;
}