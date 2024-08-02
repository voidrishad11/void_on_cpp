/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 April, 2024 | 23.37.19
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
        vll a(2*n);
        ll even = 0, odd = 0;
        for (ll i = 0; i < 2*n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0)
            {
                even ++;
            }
            else
            {
                odd++;
            }
        }
        if ((odd-even) != 0 && (odd-even) % 2 == 0 )
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
        
        // cout << even << " " << odd << nL;
    }
    return 0;
}