/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 28 March, 2024 | 20.50.57
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
        ll n;
        cin >> n;
        ll m = n*2;
        char a[m][m];
        ll f1 = 0,f2 = 0;
        for (ll i = 0; i < m; i++)
        {
            if (f1 < 2)
            {
                f2 = 0;
                for (ll j = 0; j < m; j++)
                {
                    if (f2 < 2)
                    {
                        a[i][j] = '#';
                    }
                    else
                    {
                        a[i][j] = '.';
                    }
                    f2++;
                    if (f2 == 4)f2 = 0;
                }
                f1++;
            }
            else
            {
                f2 = 0;
                for (ll j = 0; j < m; j++)
                {
                    if (f2 < 2)
                    {
                        a[i][j] = '.';
                    }
                    else
                    {
                        a[i][j] = '#';
                    }
                    f2++;
                    if (f2 == 4)f2 = 0;
                }
                f1++;
            }
            if (f1 == 4)f1 = 0;
        }
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
            cout << nL;
        }
    }
    return 0;
}