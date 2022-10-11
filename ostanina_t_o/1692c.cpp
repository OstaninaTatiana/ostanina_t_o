#include <iostream>
#include <string>
#include <array>


int main()
{
	int t = 0;
	std::array<int, 8> x{ 0 };
	std::array<int, 8> y{ 0 };
	int max_x = 0, min_x = 9;
	int max_y = 0, min_y = 9;
	std::string s;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			x[j] = 0;
			y[j] = 0;
		}
		for (int j = 0; j < 8; j++)
		{
			std::cin >> s;
			for (int k = 0; k < 8; k++)
			{
				if (s[k] == '#')
				{
					x[j] += 1;
					y[k] += 1;
				}
			}
		}
		//посчитали, сколько решеток в каждой строке/столбце таблицы

		for (int j = 0; j < 8; j++)
		{
			if (x[j] == 2)
			{
				min_x = j;
				break;
			}
		}

		for (int j = 7; j > -1; j--)
		{
			if (x[j] == 2)
			{
				max_x = j;
				break;
			}
		}

		for (int j = 0; j < 8; j++)
		{
			if (y[j] == 2)
			{
				min_y = j;
				break;
			}
		}

		for (int j = 7; j > -1; j--)
		{
			if (y[j] == 2)
			{
				max_y = j;
				break;
			}
		}

		std::cout << (max_x + min_x) / 2 + 1 << ' ' << (max_y + min_y) / 2 + 1 << std::endl;
	}
	
}



