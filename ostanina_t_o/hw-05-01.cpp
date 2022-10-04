#include <iostream>



int main()
{
	double epsilon = 0.001;
	double delta = 0.1;
	double a = -1;
	double b = 1;
	double s = 0;
	double p = 1;
	int c = 0;
	double fact = 1;
	double y = 0;
	std::cout << "x" << '\t' << "s(x)" << '\t' << "f(x)" << std::endl;
	for (double x = a; x <= b; x += delta)
	{
		

		y = cos(x);
		p *= -1;
		s += p * std::pow(x, 2 * c) / fact;
		c++;
		fact *= 2 * c * (2 * c - 1);

		std::cout << x << '\t' << s << '\t' << y << std::endl;

		if (std::abs(std::pow(x, 2 * c) / fact) < epsilon)
		{
			break;
		}
	}
	
}



