#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n,m,temp,spy;
    cin>>m;
    for ( long long i = 1; i <= m; i++)
    {
        cin>>n;
        vector<long long>a(n);
        vector<long long>ori(n);
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
            ori[i]=a[i];
        }
        sort(a.begin(),a.end());
        if (a[0]!=a[1])
        {
            spy = a[0];
        }
        else if (a[n-1]!=a[n-2])
        {
            spy = a[n-1];
        }
        for (long long i = 0; i < n; i++)
        {
            if(ori[i]==spy)
            {
                cout<<i+1<<"\n";
            }
        }
    }
    return 0;
}
