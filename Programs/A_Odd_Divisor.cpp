#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,i,c;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        cin>>c;
        if (c%2==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    
    
    return 0;
}