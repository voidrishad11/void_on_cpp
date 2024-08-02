/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 29 May, 2024 | 16.50.44
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
    ll n,x;
    cin >> n >> x;
    char c;
    ll p,sum = x,d=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> c >> p;
        if (c == '+')
        {
            sum += p;
        }
        else if (c == '-')
        {
            if (sum >= p)
            {
                sum -= p;
            }
            else
            {
                d++;
            }
        }
    }
    cout << sum <<" "<<d<<nL;
    return 0;
}