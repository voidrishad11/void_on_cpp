/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 27 December, 2023 | 22.24.03
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
    string so,s,fix;
    cin>>so;
    s = so;
    reverse(s.begin(),s.end());
    for (ll i = 0; i < s.size(); i++)
    {
        if ( s[i] == '?' )
        {
            s[i] = so[i];
        }
        else if ( so[i] == '?' )
        {
            so[i] = s[i];
        }
    }
    fix = s;
    reverse(fix.begin(),fix.end());
    if (fix == s)
    {
        cout<<s<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }
    
    return 0;
}