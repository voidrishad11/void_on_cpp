/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 03 March, 2024 | 19.07.14
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
ll dig (string s,ll x , ll y)
{
    ll ln = s.size();
    ll tot = 0;
    for (ll i = 0; i < ln; i++)
    {
        tot +=  s[i] - '0';
    }
    if (tot<=y && tot >= x)
    {
        ll num = stoll(s);
        return num;
    }
    else
    {
        return 0;
    }
}
int main()
{
    ll a,b,n;
    cin >> n >> a >> b;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        string ss = to_string(i);
        sum += dig(ss,a,b);
    }
    
    cout<< sum << nL;
    return 0;
}