#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    long long t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if (a>98)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}