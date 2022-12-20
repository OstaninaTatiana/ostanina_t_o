#include <iostream>
#include <fstream>

int main()
{


	double x = 0;
	double y = 0;
	int c_right = 0;
	double c_all = 0;

	while (cin.good())
	{
		std::cin >> x >> y;
		c_all += 1;
		if (((y >= x + 1) || (y <= x - 1)) && (x * x + y * y <= 1))
		{
			c_right += 1;
		}
	}

	std::cout << c_right / c_all << std::endl;

	return 0;
}
