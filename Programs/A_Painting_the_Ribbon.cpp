/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 16 April, 2024 | 22.41.33
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,paint,k,nn;
        cin >> n >> paint >> k;
        if (paint == 1)
        {
            cout << "NO\n";
        }
        else
        {
            nn = ceil(double(n)/paint);
            n = n - nn;
            if ( k >=n )
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}