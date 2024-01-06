/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 05 January, 2024 | 23.10.22
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
    ll x,y,z,n = 0,e,f;
    cin >> x >> y >> z;
    ll m = (x+y)/z;
    if ( x % z == 0 || y % z == 0)
    {
        n = 0;
    }
    else
    {
        e = z - x % z;
        f = z - y % z;
        n = min(e, f);
    }
    cout<<m<<" "<<n<<"\n";
    return 0;
}