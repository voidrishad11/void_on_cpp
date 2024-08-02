/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 29 December, 2023 | 15.35.30
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
        ll h,n,m;
        cin>>h>>n>>m;
        if ( h <= 20)
        {
            for (ll i = 0; h>0 && i < m; i++)
            {
                h = h - 10;
                // cout<<h<<" ";
            }
            for (ll i = 0; h>0 && i < n; i++)
            {
                h = (h/2) + 10;
                // cout<<h<<" ";
            }
        }
        else
        {
            for (ll i = 0; h>0 && i < n; i++)
            {
                h = (h/2) + 10;
                // cout<<h<<" ";
            }
            for (ll i = 0; h>0 && i < m; i++)
            {
                h = h - 10;
                // cout<<h<<" ";
            }
        }
        if ( h <= 0 )
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