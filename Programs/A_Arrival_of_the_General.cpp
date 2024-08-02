/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 09 April, 2024 | 18.43.07
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
    vll a(n),b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(all(b));
    ll mn = b[0];
    ll mx = b[n-1];
    ll mni,mxi;

    // cout << mx << mn << nL;

    //for shifting max
    for (ll i = 0; i < n; i++)
    {
        // cout << a[i] << " ";
        if (mx == a[i])
        {
            mxi = i;
            break;
        }
    }
    // cout << nL;
    
    ll c = 0;
    //for shifting min
    for (ll i = n-1; i >= 0; i--,c++)
    {
        // cout << a[i] << " ";
        if (mn == a[i])
        {
            mni = i;
            break;
        }
    }
    // cout <<nL;
    
    if (mxi > mni)
    {
        cout << mxi+c-1 << nL;
    }
    else
    {
        cout << mxi+c << nL;
    }
    
    return 0;
}