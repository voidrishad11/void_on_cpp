/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 06 May, 2024 | 23.13.50
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
    ll n;
    cin >> n;
    vll a(n);
    vll b(n-1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vll cnt;
    ll c = 1;
    if ( n == 1 )
    {
        cout << "1\n";
    }
    else
    {
        for (ll i = 1; i < n; i++)
        {
            if (a[i] >= a[i-1])
            {
                c++;
                // cout << c << nL;
            }
            else
            {
                cnt.push_back(c);
                // cout << c << nL;
                c = 1;
            }
            if (i == n-1)
            {
                cnt.push_back(c);
            }
        }
        sort(cnt.rbegin(),cnt.rend());

        cout << cnt[0] << nL;
    }
    
    
    return 0;
}