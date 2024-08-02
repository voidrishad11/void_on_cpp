/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 19 February, 2024 | 22.36.57
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

ll sumd(ll num) 
{
    if (num < 10) return num * (num + 1) / 2;
    ll d = log10(num);
    ll p = pow(10, d);
    ll mos = num / p;
    return mos * 45 * d * (p / 10) + mos * (mos - 1) / 2 * p + mos * (1 + num % p) + sumd(num % p);
}

ll solve(ll n) 
{
    return sumd(n);
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
