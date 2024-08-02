#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() 
{
    long long t,x,f=0;
    cin>>t;
    vector<long long>a(t);
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for (int i = 0; i < t; i++)
    {
        if(a[i]==x)
        {
            cout<<i<<"\n";
            f++;
            break;
        }
    }
    if(f==0)
    {
        cout<<"-1\n";
    }
    return 0;
}