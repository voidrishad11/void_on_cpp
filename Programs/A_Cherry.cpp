/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 03 February, 2024 | 23.11.42
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
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
#include <iostream>
#include <vector>
#include <algorithm>


int main() 
{
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vll a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll max_product = -1e12;
        
        
        for (ll l = 0; l < n - 1; l++) 
        {
            for (ll r = l + 1; r < n; r++) 
            {
                ll current_product = min(a[l], a[r]) * max(a[l], a[r]);
                max_product = max(max_product, current_product);
            }
        }
        cout << max_product << "\n";
    }
    
    return 0;
}
