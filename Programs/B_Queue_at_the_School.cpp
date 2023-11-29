#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,c=0,t;
    cin >> n>>t;
    string s;
    cin>>s;
    char temp;
    for (c = 0; c < t; c++)
    {
        for (long long i = 0; i < n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}