/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 11 March, 2024 | 00.22.47
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
    ll n,k;
    cin >> n >> k;

    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    
    for (ll i = 0; i < n; i += k) 
    {

        ll groupSize = min(k, n - i);

        ll minValue = *min_element(a.begin() + i, a.begin() + i + groupSize);
        cout << minValue << " ";
    }

    cout << nL;

    return 0;
}
