/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 13 January, 2024 | 17.43.52
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
    while ( t-- )
    {
        ll a,b,c,x,y;
        cin >> a>>b>>c>>x>>y;
        x = x - a;
        y = y - b;
        if (x<0)
            x = 0;
        if (y<0)
            y = 0;
        if(x+y<=c)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}