#include <iostream>
 
using namespace std;
 
int main()
{
    int n=0;
    cin >> n;
    int num;
    for (int i=0; i<n; i++)
    {
        cin >> num;
        int n1 = num / 1000;
        int n2 = num / 100 % 10;
        int n3 = num / 10 % 10;
        int n4 = num % 10;
        
        
        int c = 0;
        if (n1 != 0)
        {
            c += 1;
        }
        if (n2 != 0)
        {
            c += 1;
        }
        if (n3 != 0)
        {
            c += 1;
        }
        if (n4 != 0)
        {
            c += 1;
        }
        
        cout << c << endl;
        
        if (n1 != 0)
        {
            cout << n1 * 1000;
        }
        if (n2 != 0)
        {
            if (n1 != 0)
            {
                cout << ' ';
            }
            cout << n2 * 100;
        }
        if (n3 != 0)
        {
            if ((n1 != 0) || (n2 != 0))
            {
                cout << ' ';
            }
            cout << n3 * 10;
        }
        if (n4 != 0)
        {
            if ((n1 != 0) || (n2 != 0) || (n3 != 0))
            {
                cout << ' ';
            }
            cout << n4;
        }
        cout << endl;
    }
    
 
    return 0;
}