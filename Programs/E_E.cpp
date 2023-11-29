#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,a,sum,b,t;
    cin>>a>>b;
    vector<long long>f(b);
    f[0]= 0;
    f[1]= 1;
    f[2]= 2;
    for (long long i = 3; i < b; i++)
    {
        f[i]= f[i-1]+f[i-2];
    }
    
    for (long long i = 0; i <= b; i++)
    {
        if(a <= f[i] && b >= f[i] )
        {
            cout<<f[i]<<"\n";
        }
        if(b <= f[i] )
        {
            break;
        }
    }
    return 0;
}