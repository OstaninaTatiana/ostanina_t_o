#include <iostream>
#include <string>
#include <array>


int main()
{
    int t = 0;
    std::string s;
    std::cin >> t;
    int n0 = 0, n1 = 0;
    for (int i = 0; i < t; i++)
    {
        std::cin >> s;
        n0 = s.size();
        n1 = -1;
        for (int j = 0; j < s.size(); j++)
        {
            if ((s[j] == '0') && (n0 == s.size()))
            {
                n0 = j;
            }
            if (s[j] == '1')
            {
                n1 = j;
            }
        }
        if ((n0 == s.size()) && (n1 == -1))
        {
            std::cout << s.size() << std::endl;
        }
        else if (n0 == s.size())
        {
            std::cout << s.size() - n1 << std::endl;
        }
        else if (n1 == -1)
        {
            std::cout << n0 + 1 << std::endl;
        }
        else
        {
            std::cout << n0 - n1 + 1 << std::endl;
        }
    }
}


