/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 09 March, 2024 | 16.41.55
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
    unordered_map<ll, ll> lastOccurrence;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        lastOccurrence[a[i]] = i;
    }
    vll b;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (i == lastOccurrence[a[i]])
        {
            b.push_back(a[i]);
        }
    }
    cout << b.size() << endl;
    for (ll i = b.size() - 1; i >= 0; i--)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    
    return 0;
}
