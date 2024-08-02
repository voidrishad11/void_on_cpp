/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 January, 2024 | 21.00.43
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
        cin >> n;
        string s1,s2;
        cin >> s1;
        cin >> s2;
        ll onedo = 0,zerodo = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                if (s1[i] == '0')
                {
                    onedo++;
                }
                else
                {
                    zerodo++;
                }
            }
        }
        cout<<max(onedo,zerodo)<<"\n";
    }
    
    return 0;
}