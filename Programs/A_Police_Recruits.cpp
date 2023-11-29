#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long long c=0,p=0,n,u=0;
    cin>>n;
    vector<long long>e(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>e[i];
    }
    for (long long i = 0; i < n; i++)
    {
        if (e[i]==-1)
        {
            c=1;
        }
        else if (e[i]!=-1)
        {
            p=p+e[i];
        }
        p = p-c;
        if (p<0)
        {
            u++;
            p=0;
        }
        c=0;
    }
    cout<<u<<"\n";
    return 0;
}
