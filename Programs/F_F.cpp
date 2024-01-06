/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 29 December, 2023 | 21.12.24
------------------------------------------------------*/


#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long

int main()
{
    ll n;
    cin>>n;
    bool flag = false;
    vector <long long> a(n),b(n),c(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
        c[i] = a[i];
        
    }
    sort(b.begin(),b.end());
    sort(c.rbegin(),c.rend());
    if ( n <= 2)
    {
        cout<<"-1\n";
        flag = true;
    }
    else
    {
        for (ll i = 0; i < n-1; i++)
        {
            swap(a[i] , a[i+1]);
            if ( a != b && a != c )
            {
                cout<<i+1<<" "<<i+2<<"\n";
                flag = true;
                break;
            }
        }
    }
    if ( !flag )
    {
        cout<<"-1\n";
    }
    return 0;
}