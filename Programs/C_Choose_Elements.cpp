#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n,k,sum1 = 0,sum2 = 0;
    cin>>n>>k;
    vector<long long>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (int i = n-1,c=0; c<k ; c++, i--)
    {
        // cout<<a[i];
        sum1+=a[i];
    }
    reverse(a.begin(),a.end());
    for (int i = n-1,c=0; c<k ; c++, i--)
    {
        // cout<<a[i];
        sum2+=a[i];
    }
    if(sum1>=sum2)
        cout<<sum1<<"\n";
    else
        cout<<sum2<<"\n";
    return 0;
}