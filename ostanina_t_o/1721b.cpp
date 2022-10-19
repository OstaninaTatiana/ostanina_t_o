#include <iostream>


int main()
{
    int t = 0;
    int n = 0;
    int m = 0;
    int sx = 0;
    int sy = 0;
    int d = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> m >> sx >> sy >> d;
        //проверим вариант: вправо - вверх
        if ((sy - 1 > d) && (n - sx > d))
        {
            std::cout << n + m - 2 << std::endl;
        }
        //проверим вариант: вверх - вправо
        else if ((m - sy > d) && (sx - 1 > d))
        {
            std::cout << n + m - 2 << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
}


