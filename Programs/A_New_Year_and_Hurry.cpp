#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long long n,k,time,c=0,ct=0;
    cin>>n>>k;
    time = 240-k;
    for(long long i = 1;i<=n;i++)
    {
        ct = ct + (5*i);
        if(ct<=time)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<"\n";
    return 0;
}
