/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 01 January, 2024 | 14.39.57
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
    cin>>t;
    while(t--)
    {
        string s,sn;
        ll temp,n;
        cin>>s;
        if(s.size() <= 10)
        {
            cout<<s<<"\n";
        }
        else
        {
            temp = s.size() - 2;
            n = s.size()-1;
            cout<<s[0]<<temp<<s[n]<<"\n";
        }
    }
    return 0;
}