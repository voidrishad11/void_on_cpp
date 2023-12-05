#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long t,a,f;
    cin>>t;
    while(t--)
    {
        long long b=2,c=1;
        cin>>a>>f;
        while(1)
        {
            if(a<=b)
            {
                cout<<c<<"\n";
                break;
            }
            else
            {
                c++;
                b+=f;
            }
        }
    }
    return 0;
}
