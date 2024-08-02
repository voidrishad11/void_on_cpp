/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 15 June, 2024 | 23.19.24
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
    ll n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll aa,bb,cc;
    aa = (k*l) / nl;
    bb = (c*d);
    cc = p / np;

    // cout << aa << nL << bb << nL << cc << nL;
    cout << min(aa,min(bb,cc)) / n << nL;

    return 0;
}