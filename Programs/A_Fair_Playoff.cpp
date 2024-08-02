/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 16 January, 2024 | 23.55.20
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
        vll a(4);
        cin >> a[0] >> a[1] >> a[2] >> a[3] ;
        ll f1 = max(a[1],a[0]), f2 = max(a[2],a[3]);
        sort(a.rbegin(),a.rend());
        // cout<<f1<<" "<<f2<<"\n";
        if ((f1 == a[1] || f1 == a[0]) && (f2 == a[1] || f2 == a[0]))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}