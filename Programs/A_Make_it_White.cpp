/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 06 February, 2024 | 20.49.22
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
        string s;
        cin >> s;
        ll c1,c2;
        for (ll i = 0; i < n; i++)
        {
            if (s[i]!='W')
            {
                c1 = i;
                break;
            }
        }
        for (ll i = n-1; i >= 0; i--)
        {
            if (s[i]!='W')
            {
                c2 = i;
                break;
            }
        }
        cout<<c2-c1+1<<"\n";
    }
    return 0;
}