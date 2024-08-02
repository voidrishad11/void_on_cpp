
/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 31 December, 2023 | 22.35.32
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

int main() 
{
    ll n,k;
    cin >>n>>k;
    bool f = false;
    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k>3)
    {
        cout<<"Yes\n";
        f = true;
    }
    else
    {
        for (ll i = 0; i < n-2; i++)
        {
            if ((a[i] + a[i+1] > a[i+2]) && (a[i+1] + a[i+2] > a[i]) && (a[i] + a[i+2] > a[i+1]))
            {
                cout<<"Yes\n";
                f = true;
                break;
            }
        }
    }
    if (!f)
    {
        cout<<"No\n";
    }
    return 0;
}