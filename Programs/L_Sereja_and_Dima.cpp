/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 08 January, 2024 | 15.31.22
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <deque>
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
    cin>>n;
    deque <ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll s = 0 , d = 0, t = 1;
    while(a.size() != 0)
    {
        if (t % 2 != 0)
        {
            s += max(a.front(),a.back());
            if (a.front() > a.back())
            {
                a.pop_front();
            }
            else
            {
                a.pop_back();
            }
            t++;
        }
        else
        {
            d += max(a.front(),a.back());
            if (a.front() > a.back())
            {
                a.pop_front();
            }
            else
            {
                a.pop_back();
            }
            t++;
        }
    }
    cout<<s<<" "<<d<<"\n";
    return 0;
}