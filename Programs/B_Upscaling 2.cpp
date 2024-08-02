/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 28 March, 2024 | 20.50.57
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
    while (t--)
    {
        ll n;
        cin >> n;
        string s1,s2;
        for (ll i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                s1 += "##";
            }
            else
            {
                s1 += "..";
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                s2 += "..";
            }
            else
            {
                s2 += "##";
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                cout<<s1<<nL<<s1<<nL;
            }
            else
            {
                cout<<s2<<nL<<s2<<nL;
            }
        }
    }
    return 0;
}