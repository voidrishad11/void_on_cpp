/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 02 April, 2024 | 23.07.17
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
    ll a,b,carry;
    cin >> a >> b;
    ll h = 0;
    h += a;

    carry = 0;
    ll nc = 0;


    while (1)
    {
        nc = a/b;
        if (nc == 0)break;

        carry = a%b;
        h += nc;
        a = nc + carry;
    }

    cout << h << nL;
    return 0;
}