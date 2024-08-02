/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 06 January, 2024 | 21.59.30
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
    ll n,p[100],q[100],r[100],i,c=0,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i]>>q[i]>>r[i];
    }
    for(i=0;i<n;i++)
    {
        sum1 = sum1 + p[i];
        sum2 = sum2 + q[i];
        sum2 = sum2 + r[i];
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}