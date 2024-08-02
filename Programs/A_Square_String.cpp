#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s,a,b;
        cin>>s;
        long long l = s.size();
        if(l%2!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            size_t mid = l/2;
            a = s.substr(0,mid);
            b = s.substr(mid);
            if (a==b)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            } 
        }
    }
    return 0;
}