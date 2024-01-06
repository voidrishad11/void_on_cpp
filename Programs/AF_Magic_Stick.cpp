/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 04 January, 2024 | 04.16.59
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
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if (x >= y || (x % 2 == y % 2 && x >= y * 3))
        {
            cout<<"YES\n";
        }
        // else if (x == 1 || 
        // (x % 2 == 0 && 3 * (x / 2) >= y) || 
        // (x % 2 != 0 && 3 * ((x + 1) / 2) >= y))
        // {
        //     cout<<"YES\n";
        // }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}