/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 14 January, 2024 | 02.26.34
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
        string s,f;
        cin >> s;
        cin >> f;
        ll sum = 0,pre = 0;
        for (ll i = 0; i < f.length(); i++)
        {
            for (ll j = 0; j < s.length(); j++)
            {
                if (f[i] == s[j])
                {
                    if (i == 0)
                    {
                        pre = j;
                    }
                    else
                    {
                        sum = sum + abs(pre - j);
                        pre = j;
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}