/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 18 January, 2024 | 00.16.54
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
    while( t -- )
    {
        ll n;
        cin >> n;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll m = a[1]-a[0];
        for (ll i = 2; i < n; i++)
        {
            ll d = a[i]-a[i-1];
            m = min(m,d);
        }
        cout<< m << "\n";
    }
    return 0;
}