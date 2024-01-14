/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 13 January, 2024 | 17.26.19
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
    while ( t-- )
    {
        ll a;
        cin >> a;
        ll b,c,i = 1;
        ll  cnt = 0;
        c = i*i*i;
        b = i*i;
        for (i = 1; b <= a || c <= a; i++)
        {
            b = i*i;
            c = i*i*i;
            if (b <= a)
            {
                cnt++;
            }
            if (c <= a)
            {
                cnt++;
            }
            if (b == c)
            {
                cnt--;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}