/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 09 June, 2024 | 23.47.40
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
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s,ans;
        for(ll i=0;i<8;i++)
        {
            cin >> s;
            for(ll j=0 ; j<8 ; j++)
            {
                if(s[j]!='.')
                {
                    ans+=s[j];
                }
            }
        }
        cout<<ans<<nL;
    }
    return 0;
}