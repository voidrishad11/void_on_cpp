/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 27 February, 2024 | 22.14.07
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
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout<<"YES\n";
        }
        else
        {
            bool flag = true;
            sort(all(a));
            for (ll i = 0; i < n-1; i++)
            {
                if (a[i+1] - a[i] > 1)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}