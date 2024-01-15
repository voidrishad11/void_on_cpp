/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 January, 2024 | 03.29.17
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
    ll n,q;
    cin >> n>> q;

    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        ll sum = 0 ;
        for (ll i = l-1; i <= r-1; i++)
        {
            sum = sum + a[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}