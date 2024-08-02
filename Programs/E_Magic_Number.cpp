/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 28 June, 2024 | 20.15.29
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

bool isprime(ll root)
{
    if(root==2) return true;
    if(root%2==0) return false;
    if(root==1) return false;
    for(int i=3;i<=sqrt(root);i++)
    {
        if(root%i==0) return false;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll sr = sqrt(n);

        if(isprime(sr) && sr*sr==n)
        {
            cout<<"YES."<<nL;
        }
        else
        {
            cout<<"NO."<<nL;
        }
    }
    return 0;
}