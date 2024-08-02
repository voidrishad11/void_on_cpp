/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 10 April, 2024 | 19.46.34
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdexcept>
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
        ll a;
        cin >> a;
        string s;
        s = to_string(a);
        ll k = 0;
        vll b;
        if (s.size() == 1)
        {
            cout<<1<<nL<<a<<nL;
        }
        else
        {
            for (ll i = s.size()-1,j=1; i >= 0; i--,j*=10)
            {
                if (s[i] != '0')
                {
                    char c = s[i];
                    b.push_back((static_cast<ll>(c - '0'))*j);
                    k++;
                }
            }
            cout << k << nL;
            for (ll i = 0; i < k; i++)
            {
                cout<<b[i]<<" ";
            }
            cout << nL;
        }
    }
    return 0;
}