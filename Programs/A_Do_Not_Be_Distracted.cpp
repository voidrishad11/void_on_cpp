/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 23 January, 2024 | 00.04.17
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
        string s,o;
        cin >> s;
        for (ll i = 1; i < n; i++)
        {
            if (s[i-1] != s[i])
            {
                char c = s[i-1];
                o+=c;
            }
            if (i==n-1)
            {
                char c = s[n-1];
                o+=c;
            }
        }
        // cout<<o<<"\n";
        sort(o.begin(),o.end());
        ll l1 = o.length();
        auto it = unique(o.begin(),o.end());
        o.erase (it,o.end());
        ll l2 = o.length();
        if (l1 != l2)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}