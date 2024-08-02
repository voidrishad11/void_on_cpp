/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 22 February, 2024 | 23.45.34
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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll x,n;
        cin >> x >> n;
        ll y =1;
        //cout << y << x%y << endl;
        for (ll i=1; i*i <= x; i++){
            if(x%i == 0)
            {   
                if(n <= x/i)
                    y = max(y, i);

                if(n <= i)
                    y = max(y, x/i);
            }
        }

        cout << y << endl;
    }
    
    return 0;
}