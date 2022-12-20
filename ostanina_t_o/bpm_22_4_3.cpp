#include <iostream>
#include <string>

int main()
{
	std::string s1 = "";
	std::string s2 = "";
	std::cin >> s1 >> s2;
	int l_s1 = s1.length();
	int l_s2 = s2.length();
	int min_len = 0;
	if (l_s1 <= l_s2)
	{
		min_len = l_s1;
	}
	else
	{
		min_len = l_s2;
	}

	int c = 0;
	for (int i = 1; i <= min_len; i++)
	{
		if (s1[l_s1 - i] == s2[l_s2 - i])
		{
			c += 1;
		}
		else
		{
			break;
		}
	}

	std::cout << l_s1 + l_s2 - 2 * c << std::endl;

	return 0;
}
