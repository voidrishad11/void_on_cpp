#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string x,y;
    long long c1=0,c2=0;
    cin>>x>>y;
    for (int i = 1; i < x.size(); i++)
    {
        if( x[i-1] > x[i])
        {
            c1++;
        }
    }
    for (int i = 1; i < y.size(); i++)
    {
        if( y[i-1] > y[i])
        {
            c2++;
        }
    }
    if(c1 < c2)
        cout<<x<<"\n";
    else
        cout<<y<<"\n";
    return 0;
}