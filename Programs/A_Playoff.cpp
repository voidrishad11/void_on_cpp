/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 30 December, 2023 | 22.54.15
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
ll power(ll base, ll exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / power(base, -exponent);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n==1)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<power(2,n)-1<<nL;
        }
    }
    return 0;
}
