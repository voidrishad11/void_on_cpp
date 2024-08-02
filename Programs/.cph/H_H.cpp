#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
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
ll gcd(ll a, ll b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() 
{
    ll t;
    cin >> t;
    for (ll ii = 1; ii <= t; ii++)
    {
        ll n;
        cin >> n;
        vll a(n);
        ll am = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            am = max(am,a[i]);
        }
        ll result = a[0];
        for (ll i = 0; i < am; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                result = min(result,gcd(result, a[i]));
            }
            if (result > 1)
            {
                cout << "Case "<<ii<<": " << i << nL;
                break;
            }
            else
            {
                for (ll k = 0; k < n; k++)
                {
                    a[i]++;
                }
            }
        }
    }
    return 0;
}
