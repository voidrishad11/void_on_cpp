/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 03 June, 2024 | 23.38.19
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
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(all(s));
        ll a=0,b=0,c=0,d=0,e=0,f=0,g=0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i]=='A')
            {
                a++;
            }
            if (s[i]=='B')
            {
                b++;
            }
            if (s[i]=='C')
            {
                c++;
            }
            if (s[i]=='D')
            {
                d++;
            }
            if (s[i]=='E')
            {
                e++;
            }
            if (s[i]=='F')
            {
                f++;
            }
            if (s[i]=='G')
            {
                g++;
            }
        }
        // cout<<a<<b<<c<<d<<e<<f<<g<<nL;
        ll cnt = 0;
        if (a<k)
        {
            cnt += k-a;
        }
        if (b<k)
        {
            cnt += k-b;
        }
        if (c<k)
        {
            cnt += k-c;
        }
        if (d<k)
        {
            cnt += k-d;
        }
        if (e<k)
        {
            cnt += k-e;
        }
        if (f<k)
        {
            cnt += k-f;
        }
        if (g<k)
        {
            cnt += k-g;
        }
        cout<<cnt<<nL;
    }
    return 0;
}