/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 24 December, 2023 | 20.21.08
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
    ll n,i,add = 0, tot = 0;
    ll c = 0;
    cin >> n;
    for (ll i = 1; 1 ; i++)
    {
        add += i;
        tot+=add;
        if (tot > n)
        {
            break;
        }
        else
        {
            c++;
        }
        // cout << tot << nL;
    }
    cout << c << nL;
    return 0;
}