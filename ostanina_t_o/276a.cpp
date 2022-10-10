#include <iostream>
 
using namespace std;
 
int main()
{
    int n=0, k=0;
    int f=0, t=0;
    int max_fun=-2000000000;
    int fun=0;
    cin >> n >> k;
    for (int i=0; i<n; i++)
    {
        cin >> f >> t;
        if (t > k)
        {
            fun = f - t + k;
        }
        else
        {
            fun = f;
        }
        if (fun > max_fun)
        {
            max_fun = fun;
        }
    }
    cout << max_fun;
 
    return 0;
}