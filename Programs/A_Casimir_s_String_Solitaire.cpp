#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string s;
    long long t,a,b,c;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        cin>>s;
        a = 0;
        b = 0;
        c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            else if (s[i] == 'B')
            {
                b++;
            }
            else if (s[i] == 'C')
            {
                c++;
            }
        }
        if (c > b)
        {
            cout<<"NO\n";
        }
        else if ((b-c)==a)
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