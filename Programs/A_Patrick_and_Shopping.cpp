/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 05 February, 2024 | 23.04.39
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
    ll a,b,c;
    cin >> a>> b>> c;
    ll x = a+c+b;
    ll y = a+a+b+b;
    ll z = b+c+c+b;
    ll zx = a+c+c+a;
    cout<<min({x,y,z,zx})<<"\n";
    return 0;
}