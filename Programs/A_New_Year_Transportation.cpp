/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 31 March, 2024 | 23.19.45
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
#include <bits/stdc++.h>

int main()
{
    ll n, t;
    cin >> n >> t;
    vll a(n);
    for (ll i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    ll pos = 1;
    while (pos < t)
    {
        pos = pos + a[pos]; // jump korar por sudhu oi position er value ta add hobe
    }

    if (pos == t) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
