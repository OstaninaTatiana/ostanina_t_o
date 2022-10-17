#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int c = 0;
    for (int i=0; i<25; i++)
    {
        cin >> a;
        if (a == 1)
        {
            c = i;
        }
    }
    int i = c / 5;
    int j = c % 5;
    cout << abs(i-2) + abs(j-2);
    

    return 0;
}
