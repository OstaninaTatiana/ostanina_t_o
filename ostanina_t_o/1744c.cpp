#include <iostream>
#include <string>


int main()
{
	int t = 0;
	std::cin >> t;
	int n = 0;
	char light_now = ' ';
	std::string s = "";
	bool was_green = false;
	int before_green = 0;
	int waiting = 0;
	int max_waiting = 0;
	bool was_first_light_before = false;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		std::cin >> light_now;
		std::cin >> s;
		was_green = false;
		before_green = 0;
		waiting = 0;
		max_waiting = 0;
		was_first_light_before = false;
		

		for (int light = 0; light < n; light++)
		{
			if ((s[light] == 'g') && !was_green)
			{
				was_green = true;
				before_green = light;
			}
			if (s[light] == light_now)
			{
				was_first_light_before = true;
			}
		    if (s[light] == 'g')
			{
				if (waiting > max_waiting)
				{
					max_waiting = waiting;
				}
				waiting = 0;
				was_first_light_before = false;
			}
			else if (was_first_light_before)
			{
				waiting += 1;
			}
			//std::cout << waiting << ' ' << max_waiting << ' ' << before_green << ' ' << was_first_light_before << ' ' << was_green << std::endl;
		}

		if (was_first_light_before && (waiting + before_green > max_waiting))
		{
			max_waiting = waiting + before_green;
		}

		std::cout << max_waiting << std::endl;
	}

}


