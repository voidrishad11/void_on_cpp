/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 28 January, 2024 | 23.40.52
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
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
    ll h,n;
    cin >> h >> n;
    bool flag = false;
    vector<pll>a(n);
    ll x,y;
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = mk(x,y);
    }
    sort(all(a));
    for (const auto& i : a)
    {
        if (h > i.first)
        {
            flag = true;
            h += i.second;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}