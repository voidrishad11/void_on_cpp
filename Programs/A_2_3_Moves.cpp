/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 07 January, 2024 | 18.55.12
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
    ll t,b,c,d;
    cin >> t;
    while (t--)
    {
        ll a;
        bool flag = false;
        cin >> a;
        if ( a%3 == 0 )
        {
            cout<<a/3<<"\n";
        }
        else
        {
            if ( a%3 == 2 )
            {
                cout<<(a/3) + 1<<"\n";
            }
            else
            {
                if ( a%3 == 1 && a%2 == 0 )
                {
                    b = (a/3) + 2;
                    c = a/2;
                    cout<<min(b,c)<<"\n";
                }
                else
                {
                    if ( a%3 == 1 )
                    {
                        b = (a/3) + 2;
                        cout<<b<<"\n";
                    }
                    else
                    {
                        cout<<b<<"\n";
                    }
                }
            } 
        }
    } 
    return 0;
}