/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 05 May, 2024 | 23.22.26
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
    ll n;
    cin >> n;
    vll a(n);
    ll e = 0,o = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]%2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if ( e > o )
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i]%2 != 0)
            {
                cout<<i+1<<nL;
            }
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i]%2 == 0)
            {
                cout<<i+1<<nL;
            }
        }
    }
    return 0;
}