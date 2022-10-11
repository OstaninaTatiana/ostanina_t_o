#include <iostream>
#include <array>


int main()
{
	int n = 0;
	std::cin >> n;
	std::array <int, 100> a;
	int temp;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> temp;
		a[temp - 1] = i;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << ' ';
	}
	
}




