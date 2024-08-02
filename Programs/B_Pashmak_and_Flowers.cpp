/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 21 May, 2024 | 01.36.27
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
    if (n == 2)
    {
        ll ai,bi;
        cin >> ai >> bi;
        
        cout << abs(ai-bi) << " " << "1\n";
    }
    else
    {
        vll a(n),b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(all(b));

        ll mn = b[0];
        ll mx = b[n-1];
        ll cm = 1,cn = 1;
        // cout << mn << " " << mx <<nL;
        for (ll i = 1; i < n-1; i++)
        {
            if (b[i] == mn)
            {
                cn++;
            }
            else break;
        }
        for (ll i = n-2; i >= 0 ; i--)
        {
            if (b[i] == mx)
            {
                cm++;
            }
            else break;
        }
        ll ways;
        if (mn == mx) 
        {
            ways = n * (n - 1) / 2;  // Combination n choose 2
        }
        else
        {
            ways = cm * cn;
        }
        cout << mx-mn << " " << ways <<nL;
    }
    return 0;
}