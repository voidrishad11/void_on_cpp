#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long a,b,c,n,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        if((a+b+c+n)%3==0 && max(a,max(b,c))<=(a+b+c+n)/3)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
  }
  return 0;
}