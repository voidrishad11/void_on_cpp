/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 04 July, 2024 | 22.10.42
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
    int n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vll ops;
    for (ll temp =-1000;temp <= 1000; temp++)
    {
        int op = 0;
        for (int x : a)
        {
            ll dif = abs(x - temp);
            op += dif / 7;
            op += (dif % 7)/3;
            op += (dif % 7 % 3);
        }
        ops.push_back(op);
    }
    sort(all(ops));
    cout << ops[0] << nL;
    return 0;
}