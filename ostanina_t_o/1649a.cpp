#include <iostream>
#include <string>
#include <array>


int main()
{
	int t = 0;
	int n = 0;
	int o_1 = 0;
	int o_l = 0;
	std::cin >> t;
	int temp = 0;
	for (int i = 0; i < t; i++)
	{
		o_1 = 0;
		o_l = 0;
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> temp;
			if (temp == 0)
			{
				o_l = j;
				if (o_1 == 0)
				{
					o_1 = j;
				}
			}
		}
		if (o_1 == 0)
		{
			std::cout << 0 << std::endl;
		}
		else
		{
			std::cout << o_l - o_1 + 2 << std::endl;
		}
	}
}


