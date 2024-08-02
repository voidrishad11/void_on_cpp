/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 07 January, 2024 | 23.02.21
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

    ll a,b,c,x,y;
    cin>>a>>b>>c;
    if(a%c==0)
    {
        x=a/c;
    }
    else
    {
        x=(a/c)+1;
    }
    if(b%c==0)
    {
        y=b/c;
    }
    else
    {
        y=(b/c)+1;
    }
    cout<<x*y<<"\n";
    return 0;
}
