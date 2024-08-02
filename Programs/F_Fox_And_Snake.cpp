/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 12 March, 2024 | 20.59.15
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
    ll a,b;
    cin >> a >> b;
    string m,n,o;
    for (ll i = 0; i < b; i++)
    {
        m+='#';
        if (i!=b-1)
        {
            n+='.';
        }
        else
        {
            n+='#';
        }   
    }
    o = n;
    reverse(all(o));
    bool flag = false;
    for (ll i = 1; i <= a; i++)
    {
        if (i%2!=0)
        {
            cout<<m<<nL;
        }
        else
        {
            if (!flag)
            {
                cout<<n<<nL;
                flag = true;
            }
            else
            {
                cout<<o<<nL;
                flag = false;
            }
            
        }
    }
    
    return 0;
}