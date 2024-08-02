/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 24 December, 2023 | 20.44.53
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
        ll n,min_cont = 0,zero_cont=0;
        cin>>n;
        vi a(n);
        vi b;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                b.push_back(i+1);
                min_cont ++;
            }
            else if(a[i] == 0)
            {
                zero_cont ++;
            }
        }
        if(zero_cont != 0)
        {
            cout<<"0\n";
        }
        else if( min_cont % 2 != 0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
            cout<<"1 0\n";
        }
    }
    return 0;
}