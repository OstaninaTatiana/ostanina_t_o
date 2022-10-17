#include <iostream>
#include <array>
 
using namespace std;
 
int main()
{
    int n=0, k=0, temp=0;
    cin >> n;
    array<int, 50> m{0};
    array<int, 50> l{0};
    for (int i=0; i<n; i++)
    {
        cin >> m[i];
    }
    
    bool cont=false;
    for (int i=n-1; i>=0; i-=1)
    {
        cont = false;
        temp=m[i];
        for (int j=n-1; j>i; j-=1)
        {
            if (m[j] == temp)
            {
                cont = true;
                break;
            }
        }
        if (!cont)
        {
            l[k] = temp;
            k += 1;
        }
    }
    cout << k << endl;
    for (int i=k-1; i>-1; i-=1)
    {
        cout << l[i] << ' ';
    }
    return 0;
}
