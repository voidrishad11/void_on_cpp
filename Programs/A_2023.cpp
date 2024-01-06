/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 30 December, 2023 | 22.20.02
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
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        ll n,k, mul=1;
        cin >> n >> k;
        vll b(n);
        for (ll i = 0; i < n; i++) 
        {
            cin >> b[i];
            mul*=b[i];
        }
        
        if (2023 % mul != 0) 
        {
            cout << "NO\n";
        } 
        else 
        {
            cout << "YES\n";
            for (ll i = 0; i < k - 1; i++) 
            {
                cout << 1 << " ";
            }
            cout << 2023 / mul << "\n";
        }
    }

    return 0;
}