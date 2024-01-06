/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 02 January, 2024 | 22.45.26
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
    ll n;
    cin>>n;
    vi a(n),b(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if ( a[i] == 0 )
        {
            reverse(b.begin(),b.end());
            b.push_back(a[i]);
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    return 0;
}