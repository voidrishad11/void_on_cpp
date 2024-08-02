#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool des_sort(long long x,long long y)
{
    return x>=y;
}
int main()
{
    long long n,c=0,s,k;
    cin>>n;
    for ( long long i = 1; i <= n; i++)
    {
        cin>>s>>k;
        vector<long long>a(s);
        vector<long long>b(s);
        for (long long i = 0; i < s; i++)
        {
            cin>>a[i];
        }
        for (long long i = 0; i < s; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),des_sort);
        for (long long i = 0; i < s; i++)
        {
            if ((a[i]+b[i])<k)
            {
                c++;
                break;
            }
        }
        if (c==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
