#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,a,sum,b;
    cin>>n;
    vector<long long>f(n);
    f[0]= 1;
    f[1]= 1;
    sum = 0;
    for (long long i = 2; i < n; i++)
    {
        f[i]= f[i-1]+f[i-2];
    }
    for (long long i = 0; i < n; i++)
    {
        sum = sum + f[i];
    }
    cout<<sum<<"\n";
    return 0;
}