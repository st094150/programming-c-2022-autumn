#include <iostream>

int main(int argc, char* argv[])
{
	int s1 = 0;
	int m1 = 0;
	int h1 = 0;
	int s2 = 0;
	int m2 = 0;
	int h2 = 0;

	std::cin >> h1;
	std::cin >> m1;
	std::cin >> s1;
	std::cin >> h2;
	std::cin >> m2;
	std::cin >> s2;

	std::cout << (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);

	return EXIT_SUCCESS;
}

