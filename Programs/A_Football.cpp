/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 29 January, 2024 | 01.19.39
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
    ll n;
    cin >> n;
    vs s(n);
    string tt1,tt2;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    if (n == 1)
    {
        cout<<s[0]<<"\n";
    }
    else
    {
        sort(all(s));
        ll t1=1,t2=0;
        tt1 = s[0];
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == s[i-1])
            {
                t1++;
            }
            else
            {
                tt2 = s[i];
                break;
            }
        }
        t2 = n - t1;
        if (t1>t2)
        {
            cout<<tt1<<"\n";
        }
        else
        {
            // cout<<t2<<"\n";
            cout<<tt2<<"\n";
        }
    }
    return 0;
}