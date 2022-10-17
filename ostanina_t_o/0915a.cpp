#include <iostream>


int main()
{
	int n = 0, k = 0;
	std::cin >> n;
	std::cin >> k;
	int min_time = 10000;
	int a = 0;
	int time = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		if (k % a != 0)
		{
			continue;
		}
		time = k / a;
		if (time < min_time)
		{
			min_time = time;
		}
	}
	std::cout << min_time;

}


