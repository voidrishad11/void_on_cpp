/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 31 December, 2023 | 22.41.36
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
    ll a = 0, b= 1,n,c;
    cin>>n;
    if(n == 1)
    {
        cout<<a<<"\n";
    }
    else if(n == 2)
    {
        cout<<b<<"\n";
    }
    else
    {
        for (ll i = 3; i <= n; i++)
        {
            c = a+b;
            a = b;
            b = c;
        }
        cout<<c<<"\n";
    }
    return 0;
}