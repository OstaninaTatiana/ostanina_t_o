#include <iostream>
#include <string>


int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    int k = 0;
    int min_cells = 200001;
    int cells = 100000;
    std::string s;
    for (int i = 0; i < t; i++)
    {
        min_cells = 200001;
        cells = 0;
        std::cin >> n >> k;
        std::cin >> s;
        for (int letter = 0; letter < k; letter += 1)
        {
            if (s[letter] == 'W')
            {
                cells += 1;
            }
        }
        if (cells < min_cells)
        {
            min_cells = cells;
        }
        for (int letter = k; letter < n; letter += 1)
        {
            if (s[letter] == 'W')
            {
                cells += 1;
            }
            if (s[letter - k] == 'W')
            {
                cells -= 1;
            }
            if (cells < min_cells)
            {
                min_cells = cells;
            }
        }
        std::cout << min_cells << std::endl;

    }
}