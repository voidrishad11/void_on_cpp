/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 28 February, 2024 | 22.41.47
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
    ll n,h;
    cin >> n >> h;
    vll a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            sum += 2;
        }
        else
        {
            sum ++;
        }
    }
    cout<<sum<<nL;
    return 0;
}