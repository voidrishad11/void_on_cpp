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
        string s;
        cin>>s;
        for (int i = 1; i <= 8; i++)
        {
            long long temp = s[1] - '0';
            if(temp != i)
            {
                cout<<s[0]<<i<<"\n";
            }
        }
        for (char i = 'a'; i <= 'h'; i++)
        {
            if(s[0] != i)
            {
                cout<<i<<s[1]<<"\n";
            }
        }
    }
    return 0;
}