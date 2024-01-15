/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 January, 2024 | 20.37.58
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
        vll x(4);
        vll y(4);
        cin >> x[0] >> y [0];
        cin >> x[1] >> y [1];
        cin >> x[2] >> y [2];
        cin >> x[3] >> y [3];

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        ll a = abs(x[0] - x[3]);
        // cout<< a << "\n";
        ll b = abs(y[0] - y[3]);
        // cout<< b << "\n";
        
        ll s = min(a,b);
        cout<< s*s << "\n";
    }
    return 0;
}