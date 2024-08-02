/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 25 February, 2024 | 22.48.36
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
        ll r,b,d;
        cin >> r >> b >> d;
        if (r==b)
        {
            cout<<"YES"<<nL;
        }
        else
        { 
            ll mn,mx,sum = 0;
            bool flag = false;
            mn = min(r,b);
            mx = max(r,b);
            d+=1;
            mn*=d;

            if (mn >= mx)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}