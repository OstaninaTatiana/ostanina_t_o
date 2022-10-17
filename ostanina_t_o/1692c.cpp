#include <iostream>
#include <string>
#include <array>


int main()
{
	int t = 0;
	std::array<int, 8> x{ 0 };
	std::array<int, 8> y{ 0 };
	int res_x = 0; 
	int res_y = 0;
	std::string s;
	std::cin >> t;
	bool f=true;
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
		f = false;
		for (int j = 0; j < 8; j++)
		{
			if (x[j] == 2)
			{
				f = true;
			}
			if ((x[j] == 1) && (f))
			{
				res_x = j;
				break;
			}
		}

		f = false;
		for (int j = 7; j > -1; j--)
		{
			if (y[j] == 2)
			{
				f = true;
			}
			if ((y[j] == 1) && (f))
			{
				res_y = j;
				break;
			}
		}


		std::cout << res_x + 1 << ' ' << res_y + 1 << std::endl;
	}

}


