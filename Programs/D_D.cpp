/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 22 January, 2024 | 21.18.45
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
        vll a(n),b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(),a.end());
        ll z= b[n-1] + b[n-2];
        ll x = a[n-1] + a[n-2];
        if (z >= x && n > 2)
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