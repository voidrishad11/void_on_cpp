#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long t,a;
    cin>>t;
    vector<long long>d(t);
    for (int i = 0; i < t; i++)
    {
        cin>>a;
        d[i]=0;
        while(1)
        {
            if(a%2==0)
            {
                d[i]++;
                a/=2;
            }
            else
            {
                a=0;
                break;
            }
        }
    }
    sort(d.begin(),d.end());
    cout<<d[t-1];
    return 0;
}
