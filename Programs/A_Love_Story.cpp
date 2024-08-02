#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t,c;
    cin>>t;
    while(t--)
    {
        c = 0;
        string s,a;
        cin>>s;
        a = "codeforces";
        for (int i = 0; i < 10; i++)
        {
            if(s[i]!=a[i])
            {
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}