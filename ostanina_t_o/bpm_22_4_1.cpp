#include <iostream>

int main()
{
	double eps = 0.0001;
	double d_x = 0.05;

	double sum = 0;
	std::cout << "x\tsum\n";
	for (double x = 0.1; x < 1 + d_x; x += d_x)
	{
		sum = 0;
		int i = 0;
		double a = 0;
		double chislitel = 1; //числитель, английского слова не помню
		double znamenatel = 1; //знаменатель, английского слова не помню
		a = chislitel / znamenatel;
		sum += a;
		while (a > eps)
		{
			i += 1;
			chislitel *= x * x;
			znamenatel *= 2 * i * (2 * i - 1);
			a = chislitel / znamenatel;
			sum += a;
		}
		std::cout << x << '\t' << sum << '\n';
	}

	return 0;
}
