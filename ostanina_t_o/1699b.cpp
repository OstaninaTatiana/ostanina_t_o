#include <iostream>
#include <string>



int main()
{
	int t = 0;
	std::cin >> t;
	int n = 0;
	int m = 0;
	int flag = 0;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n >> m;
		for (int raw = 0; raw < n; raw += 1)
		{
			if ((raw % 4 == 0) || (raw % 4 == 3))
			{
				if (m == 2)
				{
					std::cout << "1 0" << std::endl;
				}
				else
				{
					for (int k = 0; k < m / 4; k++)
					{
						std::cout << "1 0 0 1 ";
					}
					if (m % 4 == 2)
					{
						std::cout << "1 0";
					}
					std::cout << std::endl;
				}
			}
			else
			{
				if (m == 2)
				{
					std::cout << "0 1" << std::endl;
				}
				else
				{
					for (int k = 0; k < m / 4; k++)
					{
						std::cout << "0 1 1 0 ";
					}
					if (m % 4 == 2)
					{
						std::cout << "0 1";
					}
					std::cout << std::endl;
				}
			}
		}
	}

}


