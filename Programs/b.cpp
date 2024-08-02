/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 19 February, 2024 | 22.05.34
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
    ll t;
    cin >> t;
    for (ll tt = 1; tt <= t; tt++)
    {
        ll p,r,s;
        cin>>p>>r>>s;
        if (p == r && s != 1)
        {
            cout<<"Case "<<tt<<": No"<<nL;
        }
        else
        {
            cout<<"Case "<<tt<<": Yes"<<nL;
        }
        
    }
    return 0;
}