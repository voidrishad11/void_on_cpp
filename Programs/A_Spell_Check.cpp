#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,so;
        cin>>s;
        so="Timru";
        sort(s.begin(),s.end());
        // cout<<s<<"\n";
        if(s==so)
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