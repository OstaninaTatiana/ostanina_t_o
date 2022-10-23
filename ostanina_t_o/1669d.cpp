#include <iostream>
#include <string>


int main()
{
    int t = 0;
    int n = 0;
    int counter_b = 0;
    int counter_r = 0;
    bool answered = false;
    std::string s = "";
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::cin >> s;
        counter_b = 0;
        counter_r = 0;
        answered = false;
        for (int letter = 0; letter < n; letter++)
        {
            if (s[letter] == 'W')
            {
                if (((counter_r == 0) || (counter_b == 0))
                    && !((counter_r == 0) && (counter_b == 0)))
                {
                    std::cout << "NO" << std::endl;
                    answered = true;
                    break;
                }
                counter_b = 0;
                counter_r = 0;
            }
            else if (s[letter] == 'B')
            {
                counter_b += 1;
            }
            else
            {
                counter_r += 1;
            }
        }
        if (!answered)
        {
            if ((counter_r != 0 && counter_b != 0) || (counter_r == 0 && counter_b == 0))
            {
                std::cout << "YES" << std::endl;
            }
            else
            {
                std::cout << "NO" << std::endl;
            }
        }
    }

}