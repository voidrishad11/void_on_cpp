#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int n ;
  cin >> n ;
  while(n--)
  {
      int a ;
      cin >> a;

        if (a%3 == 0)
        {
            cout << "Second\n";
        }
        else
        {
           cout << "First\n";
        }
  }
  return 0;
}