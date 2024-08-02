/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 18 February, 2024 | 18.35.04
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,d;
        cin >> n >> d;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        ll m = 1;
        ll l = 0;
        ll r = n-1;
        for (ll i = 0; i < n; i++)
        {
            m = 1;
            for (ll j = 0; j < a.size(); j++)
            {
                //cout<<a[j]<<" ";
                m = m * a[j];
            }
            cout<<m%d<<" ";
            //cout<<nL;
            if (s[i] == 'L')
            {
                // a[l] = 1;
                // l++;
                a.erase(a.begin());
            }
            else if (s[i] == 'R')
            {
                // a[r] = 1;
                // r--;
                a.pop_back();
            }
        }
        cout<<nL;
    }
    return 0;
}