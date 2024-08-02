/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 08 June, 2024 | 23.44.27
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
        string s,frst,scnd;
        char k;
        cin >> n >> k;
        cin >> s;
        if (k=='0')
        {
            cout <<s<<k<< nL;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                char c = s[i];
                if (k > s[i])
                {
                    for (ll j = i+1; i < n; i++)
                    {
                        scnd+=s[i];
                    }
                    break;
                }
                else
                {
                    frst+=s[i];
                }
            }
            string ans = frst + k + scnd;
            cout << ans << nL;
        }
    }
    return 0;
}