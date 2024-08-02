/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 19 April, 2024 | 21.25.41
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
#define rall(x) (x).rbegin(), (x).rend()
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
        ll n,k;
        cin >> n >> k;
        vll a(n),b(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(all(a));
        sort(rall(b));

        for (ll i = 0; i < k; i++)
        {
            if (b[i] > a[i])
            {
                swap(a[i],b[i]);
            }
        }

        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << nL;
    }
    return 0;
}