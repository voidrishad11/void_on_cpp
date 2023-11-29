#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long a,y;
    cin>>a;
    a=a+1;
    long long x = ceil(a/4.0);
    if(x%2==0)
    {
        y = (4*x-a);
    }
    else
    {
        y = 3-(4*x-a);
    }
    cout<<x-1<<" "<<y<<"\n";
    return 0;
}
