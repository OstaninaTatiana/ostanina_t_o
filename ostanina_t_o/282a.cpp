#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
  string com;
  int c=0, n=0;
  cin >> c;
  
  for (int i=0; i<c; i+=1)
  {
      cin >> com;
      if ('+' == com[1])
      {
          n += 1;
      }
      else
      {
          n -= 1;
      }
      
  }
  cout << n;
}