/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 January, 2024 | 03.14.10
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,c,m;
        cin >> a>> b>> c;
        m = max(b,max(a,c));
        if (a == 0 && b == 0 && c == 0)
        {
            a=1;
            b=1;
            c=1;
        }
        else
        {
            if (a == m)
            {
                a = 0;
            }
            else
            {
                a = m - a + 1;
            }
            if (b == m)
            {
                b = 0;
            }
            else
            {
                b = m - b + 1;
            }
            if (c == m)
            {
                c = 0;
            }
            else
            {
                c = m - c + 1;
            }
        }
        
        
        cout<<a<<" "<<b<<" "<<c<<"\n"; 
    }
    
    return 0;
}