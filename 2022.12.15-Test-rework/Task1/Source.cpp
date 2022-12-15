#include <iostream>

int** fun1(int** c, int d, int e, int i, int n, int f)
{
	if (i > n * n)
	{
		return c;
	}

	if ((e < n - f) and (d == f - 1))
	{
		if (c[d][e])
		{
			c[++d][++e] = i;
			return fun1(c, d, ++e, ++i, n, ++f);
		}

		else
		{
			c[d][e] = i;
			return fun1(c, d, ++e, ++i, n, f);
		}
	}

	else if ((e == n - f) and (d < n - f))
	{
		c[d][e] = i;
		return fun1(c, ++d, e, ++i, n, f);
	}

	else if ((e > f - 1 and d == n - f))
	{
		c[d][e] = i;
		return fun1(c, d, --e, ++i, n, f);
	}

	else if ((e == f - 1) and (d >= f))
	{
		c[d][e] = i;
		return fun1(c, --d, e, ++i, n, f);
	}
}

int** fun2(int n)
{
	int** b = new int* [n];

	for (int i = 0; i < n; i++)
	{
		b[i] = new int[n] {0};
	}

	return b;
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = fun2(n);

	a = fun1(a, 0, 0, 1, n, 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}