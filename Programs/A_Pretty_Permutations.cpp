/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 01 February, 2024 | 22.30.24
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
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
        vll a(n);
        if ( n%2==0 )
        {
            for (ll i = 0; i < n; i++)
            {
                if ( i%2==0 )
                {
                    a[i] = i+2;
                }
                else
                {
                    a[i] = i;
                }
            }
        }
        // 1 2 3 4 5 6 7 
        // 2 1 4 3 7 5 6
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if ( i >= n-3 )
                {
                    a[n-1] = n-1;
                    a[n-2] = n-2;
                    a[n-3] = n;
                }
                else
                {
                    if ( i%2==0 )
                    {
                        a[i] = i+2;
                    }
                    else
                    {
                        a[i] = i;
                    }
                } 
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}