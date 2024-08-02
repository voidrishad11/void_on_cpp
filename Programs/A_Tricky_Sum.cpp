
/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 25 March, 2024 | 23.49.25
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = n * (n + 1) / 2;
        ll a = 1;
        while (a <= n)
        {
            ans -= a * 2;
            a *= 2;
        }
        cout << ans << endl;
    }

    return 0;
}