#include <iostream>
#include <array>


int main()
{
	int n = 0;
	std::array <int, 200001> a{ 0 };
	int temp = 0;
	int mem = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		a[temp] += 1;
	}
	for (int i = 1; i < 200001; i++) // индексы по массиву 
	{
		if (mem > i)
		{
			continue;
		}
		if (a[i] == 0)
		{
			continue;
		}
		while ((a[i] > 0) && (mem < i))
		{
			mem += 1;
			a[i] -= 1;
		}

	}
	std::cout << mem;
}


