/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 14 January, 2024 | 18.06.03
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
    ll n ;
    cin >> n;
    ll i;
    ll c = 0, c1 = 0,c2 = 0;
    for (i = 2; i <= n; i++)
    {
        if (i%5 == 0)
        {
            c += 10;
            c += 2;
        }
        else
        {
            c += 2;
        }
    }
    cout<<c<<"\n";
    return 0;
}