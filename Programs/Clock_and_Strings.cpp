/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 10 May, 2024 | 21.01.34
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
        ll a,b,c,d;
        cin >> a >> b>> c>> d;
        ll cnt = 0;
        ll lim = abs(a-b);

        if (lim <= 1)
        {
            cout <<"NO\n";
        }
        else
        {
            if (a>b)
            {
                swap(a,b);
            }
            a++;
            b--;
            ll i = 0;
            for (;i<lim;i++)
            {
                if (c == a || d == a)
                {
                    cnt ++;
                    
                }
                a++;
            }
            if (cnt == 1)
            {
                cout <<"YES\n";
            }
            else
            {
                cout <<"NO\n";
            }
        }
    }
    return 0;
}