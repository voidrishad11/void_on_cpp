/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 14 January, 2024 | 02.37.18
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
    ll n,p,b;
    cin >> n >> p >> b;
    if(n <= p && n <= b)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}

// https://codeforces.com/problemset/problem/1186/A