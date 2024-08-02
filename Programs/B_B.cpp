/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 22 January, 2024 | 21.06.22
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
        string s,d;
        cin >> s;
        cin >> d;
        sort(s.begin(),s.end());
        sort(d.begin(),d.end());
        ll c = 0;
        ll m = -1;
        for (ll i = 0; i < s.length(); i++)
        {
            for (ll j = m + 1; j < d.length(); j++)
            {
                if (s[i] == d[j])
                {
                    c++;
                    m++;
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}