/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 06 February, 2024 | 20.58.58
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
        ll n;
        cin >> n;
        vll a(n);
        string o;
        ll maxi = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            o += 'i';
            maxi = max(maxi,a[i]);
        }
        // cout<<o<<"\n";
        string s = "abcdefghijklmnopqrstuvwxyz";
        ll c = 0;
        ll cnt = 0;
        for (ll c = 0; cnt < n; c++)
        {
            for (ll i = 0,j = 0; i < n; i++)
            {
                if (a[i] == j)
                {
                    char ch = s[c];
                    o[i] = ch;
                    a[i] = MOD;
                    j++;
                    cnt++;
                }
            }
        }
        cout << o << "\n";
    }
    return 0;
}