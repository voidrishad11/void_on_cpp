/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 17 February, 2024 | 23.23.39
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
        string s,r;
        cin >> s;
        ll c = 0;
        ll d = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i]=='1')
            {
                d = 0;
                for (ll j = i+1; s[j] == '0' && j < s.size(); j++)
                {
                    d++;
                    if (j == s.size()-1)
                    {
                        d = 0;
                    }
                }
                c+=d;
            }
        }
        
        cout<<c<<nL;
    }
    return 0;
}