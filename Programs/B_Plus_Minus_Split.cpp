
/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 31 December, 2023 | 22.35.32
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
        ll n;
        string s;
        cin >> n;
        cin >> s;
        ll pl=0,mi=0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i]=='+')
            {
                pl++;
            }
            else if (s[i]=='-')
            {
                mi++;
            }
        }
        cout<<abs(pl-mi)<<"\n";
    }
    return 0;
}
