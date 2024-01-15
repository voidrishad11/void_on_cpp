/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 January, 2024 | 21.34.28
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
        ll c = 0;
        ll n,level,per_s,per_off;
        cin >> n >> level >> per_s >> per_off;
        vll mom(n+1);
        mom[0] = 0;
        for (ll i = 1; i < n+1; i++)
        {
            cin >> mom[i];
            // cout<< mom[i] <<" ";
        }
        for (ll i = 0; i < n; i++)
        {
            ll dif = mom[i+1] - mom[i];
            if (dif*per_s < per_off)
            {
                level -= dif*per_s;
            }
            else
            {
                level -= per_off;
            }
            if (level > 0)
            {
                c++;
            }
            else
            {
                break;
            } 
        }
        if (c==n)
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