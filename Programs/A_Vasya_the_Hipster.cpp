#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long long a,b,s,t;
    cin>>a>>b;
    if (a>=b)
    {
        s=b;
        t=(a-b)/2;
    }
    else
    {
        s=a;
        t=(b-a)/2;
    }
    cout<<s<<" "<<t<<"\n";
    return 0;
}
