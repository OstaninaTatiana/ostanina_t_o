#include <iostream>
#include <array>
 
bool cont(int a, std::array<int, 1000> s)
{
	for (int i = 0; i < 100; i++)
	{
		if (s[i] == a)
		{
			return true;
		}
	}
	return false;
}
 
int main()
{
	int t = 0;
	int n = 0, x = 0;
	std::array<int, 1000> m{ 0 };
	std::cin >> t;
	int res = 0;
	int c = 0;
 
	for (int i=0; i < t; i++)
	{
		c = 0;
		res = 0;
		std::cin >> n >> x;
		for (int j = 0; j < n; j++)
		{
			std::cin >> m[j];
		}
		for (int j = 0; j < n; j++)
		{
			//std::cout << m[j] << std::endl;
		}
		for (int j = 1; j < 10200; j+=1)
		{
			if (!cont(j, m))
			{
				c += 1;
				//std::cout << c << ' ' << j << std::endl;
			}
			if (c == x + 1)
			{
				res = j - 1;
				break;
			}
		}
		for (int j = 0; j < n; j++)
		{
			m[j] = 0;
		}
		std::cout << res << std::endl;
	}
}