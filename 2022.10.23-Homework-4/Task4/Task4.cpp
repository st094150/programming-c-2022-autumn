#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int n = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	for (int i = 0; i <= 1000; i++)
	{
		if ((a * i * i * i + b * i * i + c * i + d == 0) and (i != e))
		{
			n++;
		}
	}

	std::cout << n;

	EXIT_SUCCESS;
}
//completed