#include <iostream>


int main()
{
	int t = 0;
	int n = 0;
	char symbol = ' ';
	std::cin >> t;
	int x1 = -1;
	int y1 = -1;
	int x2 = -1;
	int y2 = -1;
	int x3 = -1; 
	int y3 = -1;
	int x4 = -1;
	int y4 = -1;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		x1 = -1;
		y1 = -1;
		x2 = -1;
		y2 = -1;
		for (int raw = 0; raw < n; raw++)
		{
			for (int column = 0; column < n; column++)
			{
				std::cin >> symbol;
				if (symbol == '*')
				{
					if (x1 == -1)
					{
						x1 = raw;
						y1 = column;
					}
					else
					{
						x2 = raw;
						y2 = column;
					}
				}
			}
		}
		if (x1 != x2 && y1 != y2)
		{
			x3 = x1;
			y3 = y2;
			x4 = x2;
			y4 = y1;
		}
		else if (x1 == x2)
		{
			x3 = (x1 + 1) % n;
			x4 = x3;
			y3 = y1;
			y4 = y2;
		}
		else
		{
			y3 = (y1 + 1) % n;
			y4 = y3;
			x3 = x1;
			x4 = x2;
		}
		for (int raw = 0; raw < n; raw++)
		{
			for (int column = 0; column < n; column++)
			{
				if (((raw == x1) || (raw == x2) || (raw == x3) || (raw == x4)) &&
					((column == y1) || (column == y2) || (column == y3) || (column == y4)))
				{
					std::cout << "*";
				}
				else
				{
					std::cout << ".";
				}
			}
			std::cout << std::endl;
		}

	}

}


