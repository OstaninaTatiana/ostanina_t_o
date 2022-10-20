#include <iostream>
#include <array>
#include <string>


int main()
{
	int t = 0;
	std::cin >> t;

	int n = 0;
	std::string s;
	int k = 0;
	std::array <int, 26> special_letters{ 0 };
	char letter;
	int counter = 0;
	int max_counter = 0;


	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			special_letters[j] = 0;
		}
		std::cin >> n >> s >> k;
		counter = 0;
		max_counter = 0;
		for (int j = 0; j < k; j++)
		{
			std::cin >> letter;
			special_letters[letter - 'a'] = 1;
		}
		for (int j = 0; j < n; j++)
		{
			if (special_letters[s[j] - 'a'] == 0)
			{
				counter += 1;
			}
			else
			{
				if (max_counter < counter)
				{
					max_counter = counter;
				}
				counter = 1;
			}
		}

		std::cout << max_counter << std::endl;
	}

}


