#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
  long long n=0;
  int temp=0;
  int c = 0;
  cin >> n;
  for (int i=0; i<19; i+=1)
  {
      temp = n % 10;
      n /= 10;
      if (7 == temp)
      {
          c += 1;
      }
      if (4 == temp)
      {
          c += 1;
      }
  }
  
  if ((c == 4) || (c == 7))
  {
      cout << "YES";
  }
  else
  {
      cout << "NO";
  }
  
}
