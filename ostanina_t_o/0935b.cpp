#include <iostream>
#include <string>
#include <array>


int main()
{
	int side = 0;
	int n = 0;
	std::cin >> n;
	std::string s = "";
	std::cin >> s;
	int m = -1;
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'U')
		{
			y += 1;
			if ((y == x + 1) && (side != 1))
			{
				m += 1;
				side = 1;
			}
		}
		if (s[i] == 'R')
		{
			x += 1;
			if ((x == y + 1) && (side != 2))
			{
				m += 1;
				side = 2;
			}
		}

	}
	std::cout << m;
}


