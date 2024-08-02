/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 28 January, 2024 | 22.59.17
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
        string s,g;
        g = to_string(n);
        ll sum = 0;
        if(g.length() == 1)cout<<g<<"\n";
        else
        {
            for (ll i = 9; i > 0; i--)
            {
                if ((sum + i) <= n)
                {
                    s += to_string(i);
                    sum += i;
                }
            }
            reverse(all(s));
            cout<<s<<"\n";
        }
    }
    return 0;
}