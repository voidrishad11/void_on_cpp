/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 15 February, 2024 | 23.09.25
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
        vll a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(all(a));
        // auto it = unique(all(a));
        // cout<<a[0]<<a[1]<<a[2];
        if (a[1] == a[2])
        {
            if (a[0] % 2 == 0)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if (a[1] == a[0])
        {
            if (a[2] % 2 == 0)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            sort(all(a));
            if (a[2] == a[0]+a[1])cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
    return 0;
}