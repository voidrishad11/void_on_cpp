/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 30 May, 2024 | 19.50.24
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
    ll n,x;
    cin >> n >> x;
    vll a(n);
    bool flag = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n-1; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                flag = true;
                cout << i+1 << " " << j+1 <<nL;
                break;
            }
        }
    }
    if(!flag) cout << "IMPOSSIBLE\n";
    return 0;
}