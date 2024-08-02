/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 10 March, 2024 | 16.32.35
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
    ll n;
    cin >> n;
    ll mid = (n+1)/2;
    ll l=1,r =n;
    for (ll i = 1; i <= n; i++)
    {
        if (i<mid)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (j==l)
                {
                    cout<<"\\";
                    
                }
                else if (j==r)
                {
                    cout<<'/';
                    
                }
                else
                {
                    cout<<"*";
                }
            }
            if (i!=mid-1)
            {
                l++;
                r--; 
            }
            cout<<nL;
        }
        else if (i == mid)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (j==mid)
                {
                    cout<<"X";
                    
                }
                else
                {
                    cout<<"*";
                }
            }    
            cout<<nL;
        }
        else
        {
            for (ll j = 1; j <= n; j++)
            {
                if (j==l)
                {
                    cout<<'/';
                    
                }
                else if (j==r)
                {
                    cout<<"\\";
                    
                }
                else
                {
                    cout<<"*";
                }
            }
            l--;
            r++;    
            cout<<nL;
        }
        
    }
    
    return 0;
}