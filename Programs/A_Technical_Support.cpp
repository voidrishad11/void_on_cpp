/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 21 March, 2024 | 23.41.00
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll q = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'Q')
            {
                q++;
            }
            else if (s[i] == 'A' && q>0)
            {
                q--;
            }
        }
        if (q==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}