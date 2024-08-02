/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 08 March, 2024 | 23.22.41
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
    string s;
    cin>>s;
    ll t;
    cin>>t;
    ll n;
    n = s.length();
    ll dp[n+1];
    ll cnt=0;
    dp[1]=0;
    for(ll i=1;i<n;i++)
    {
       if(s[i]==s[i-1])
       {
            cnt++;
       }
       dp[i+1]=cnt;
    }
    while (t--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<dp[r]-dp[l]<<nL;
    }
    return 0;
}