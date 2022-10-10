#include<iostream>
 
int main()
{
    int w=0;
    std::cin >> w;
    int a=w+1;
    while (true)
    {
        if ((a % 10 == a / 1000) || (a % 10 == a / 100 % 10) || (a % 10 == a / 10 % 10) || (a / 100 % 10 == a / 10 % 10) || (a / 1000 == a / 100 % 10) || (a / 1000 == a / 10 % 10))
        {
            a++;
            continue;
        }
        break;
    }
    std::cout << a;
    return 0;
}