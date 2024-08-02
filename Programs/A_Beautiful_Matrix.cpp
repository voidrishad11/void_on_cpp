/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 28 March, 2024 | 19.51.22
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
    ll a[5][5];
    ll r = 0,c = 0;
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
            {
                r = i;
                c = j;
            }
        }
    }
    ll n = abs(2-r) + abs(2-c);
    cout << n << nL;
    return 0;
}