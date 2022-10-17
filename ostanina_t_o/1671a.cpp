#include <iostream>
#include <string>
#include <array>


int main()
{
	int t = 0;
	std::cin >> t;
	std::string s = "";
	int c = 0;
	bool a = false;
	bool b = false;
	bool done = false;
	for (int counter = 0; counter < t; counter++)
	{
		std::cin >> s;
		c = 0;
		a = false;
		done = false;
		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] == 'a') && a)
			{
				c += 1;
			}
			else if ((s[i] == 'a') && !a)
			{
				if (c == 1)
				{
					std::cout << "NO" << std::endl;
					done = true;
					break;
				}
				c = 1;
				a = true;
				b = false;
			}
			else if ((s[i] == 'b') && b)
			{
				c += 1;
			}
			else
			{
				if (c == 1)
				{
					std::cout << "NO" << std::endl;
					done = true;
					break;
				}
				c = 1;
				b = true;
				a = false;
			}
		}
		if (c != 1)
		{
			std::cout << "YES" << std::endl;
		}
		else if (!done)
		{
			std::cout << "NO" << std::endl;
		}
	}
}


