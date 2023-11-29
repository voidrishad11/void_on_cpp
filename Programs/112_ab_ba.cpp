#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
long long power(int base, int exponent) 
{
    long long result = 1;
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    return result;
}
int main() 
{
    long long a,b,c,d;
    cin>>a>>b;
    c = power(a,b);
    d = power(b,a);
    cout<<c-d<<"\n";
    return 0;
}
