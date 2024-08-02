/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 30 May, 2024 | 19.40.15
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
    ll x,y,z;
    char c1,c2;
    cin >> x >> c1 >> y >> c2 >> z;
    if (c1 == '+')
    {
        if (x + y == z) cout <<"Yes\n";
        else cout <<x+y<<nL;
    }
    else if (c1 == '-')
    {
        if (x - y == z) cout <<"Yes\n";
        else cout <<x-y<<nL;
    }
    else if (c1 == '*')
    {
        if (x * y == z) cout <<"Yes\n";
        else cout <<x*y<<nL;;
    }
    return 0;
}