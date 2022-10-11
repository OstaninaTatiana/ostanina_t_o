#include <iostream>
#include <array>


int main()
{
	int t = 0;
	std::cin >> t;
	int n = 0;
	int s = 0;
	int a = 0;
	int mem = -1;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		s = 1;
		mem = -1;
		for (int j = 0; j < n; j++)
		{
			std::cin >> a;
			if (s == -1)
			{
				continue;
			}
			if (a == 1)
			{
				if (mem == 0 || mem == -1)
				{
					s += 1;
				}
				else
				{
					s += 5;
				}
			}
			else
			{
				if (mem == 0)
				{
					s = -1;
				}
			}

			mem = a;
		}
		std::cout << s << std::endl;

	}
	
	
}



