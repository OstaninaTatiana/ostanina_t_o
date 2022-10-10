#include<iostream>
 
//using namespace std;
 
int main()
{
    int w=0;
    std::cin >> w;
    if (w % 5 == 0)
    {
        std::cout << w / 5;
    }
    else
    {
        std::cout << w / 5 + 1;
    }
    return 0;
}