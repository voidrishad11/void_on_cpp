/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 24 February, 2024 | 23.04.02
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n),b(n),c(n-1);
        for (ll i = 0, j= 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            if (i!=0)
            {
                c[j] = abs(a[i] - a[i-1]);
                // cout<<nL<<c[j]<<nL;
                j++;
            }
            
        }
        sort(all(b));
        
        ll flag = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                flag++;
            }
        }
        // cout<< flag << nL;
        if (flag != n)
        {
            cout<<"0\n";
        }
        else
        {
            sort(all(c));
            ll nn = 0;
            for (ll i = 0; i < n-1; i++)
            {
                if (c[i]!=0 && c[i]%2!=0)
                {
                    nn = c[i];
                    break;
                }
                else if(c[i] == 0)
                {
                    nn = 1;
                }
                else if(c[i]%2==0)
                {
                    nn = c[i]+1;
                }
            }
            ll ans = ceil(nn/2.0);
            cout<<ans<<nL;
        }
    }
    return 0;
}