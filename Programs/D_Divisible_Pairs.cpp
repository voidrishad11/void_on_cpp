/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 13 February, 2024 | 22.08.35
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
        ll n,x,y;
        cin >> n >> x >> y;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll c=0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                if (((a[i] + a[j]) % x == 0) && (abs(a[i] - a[j]) % y == 0))
                {
                    c++;
                }
            }
        }
        cout<<c<<nL;
    }
    return 0;
}