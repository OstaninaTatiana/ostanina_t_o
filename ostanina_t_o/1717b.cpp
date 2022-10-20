#include <iostream>



int main()
{
	int t = 0;
	std::cin >> t;
	int n, k, r, c;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n >> k >> r >> c;
		r -= 1;
		c -= 1;
		for (int y = 0; y < n / k; y++)
		{
			// множим строки матриц
			for (int i = 0; i < k; i++)
			{
				// делаем "строку" матриц в цикле
				for (int x = 0; x < n / k; x++)
				{
					// выводим одну строку одной матрицы 
					for (int z = 0; z < (i + (c - r) + k * 1000) % k; z++)
					{
						std::cout << ".";
					}
					std::cout << "X";
					for (int z = 0; z < k - (i + (c - r) + k * 1000) % k - 1; z++)
					{
						std::cout << ".";
					}
				}
				std::cout << std::endl;
			}
		}
	}
}


