#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long i,n,j,l,sum1,sum2;
    string s;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        sum1 = 0;
        sum2 = 0;
        cin>>s;
        for (j = 0; j < 6; j++)
        {
            if(j<3)
            {
                char c = s[j];
                long long digit = (int)c;
                sum1+=digit;
            }
            else
            {
                char c = s[j];
                long long digit = (int)c;
                sum2+=digit;
            }
        }
        if(sum1==sum2)
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