#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,c=0;
    cin >> n;
    string s;
    cin>>s;
    char a = s[0];
    for (long long i = 1; i <= n; i++)
    {
        if(a==s[i])
        {
            c++;
        }
        a=s[i];
    }
    cout<<c<<"\n";
    return 0;
}
