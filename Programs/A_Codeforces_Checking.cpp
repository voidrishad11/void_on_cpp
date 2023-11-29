#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n;
    char c;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>c;
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 's')
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