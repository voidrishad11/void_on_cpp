/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 31 January, 2024 | 22.10.12
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
    while(t--)
    {
        ll a,b,k;
        cin >> a>> b>> k;
        ll sum = 0;
        sum = (a*ceil(k/2.0)) - (b*(k/2));
        cout << sum <<"\n";     
    }
    return 0;
}