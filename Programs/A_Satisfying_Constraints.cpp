/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 03 February, 2024 | 23.38.50
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
#define inf LLONG_MAX
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
        ll n, a, x, k, start = -inf, end = inf, c = 0;
        cin >> n;
        vll v;
        for (ll i = 0; i < n; i++) 
        {
            cin >> a >> x;
            if (a == 1) 
            {
                start = max(start, x);
            } 
            else if (a == 2) 
            {
                end = min(end, x);
            } 
            else 
            {
                v.push_back(x);
            }
        }
        for (ll i = 0; i < v.size(); i++) 
        {
            if (v[i] >= start && v[i] <= end) 
            {
                c++;
            }
        }
        if (end < start) 
        {
            cout << 0 << nL;
        } 
        else 
        {
            ll ans = max(0LL, end - start + 1 - c);
            cout << ans << nL;
        }
    }
    return 0;
}
