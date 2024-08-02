/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 28 June, 2024 | 20.42.50
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
    int t;
    cin >> t;
    for (ll tt = 1; tt <= t; tt++)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "Case " << tt << ": 0" << nL;
        }
        else
        {
            cout << "Case " << tt << ": "<< (2 * n) - 2 << nL;
        }
    }
    return 0;
}
