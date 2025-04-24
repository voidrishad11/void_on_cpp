/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 03 February, 2024 | 23.11.42
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
#include <iostream>
#include <vector>
#include <algorithm>


int main() 
{
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    float sa = (n*b)/m;
    // cout << sa << nL;
    if (sa <= n*a) 
    {
        if (n % m == 0 || n < m) 
        {
            if (n < m) 
            {
                cout << min(n*a, b) << nL;
            }
            else
            {
                cout << (n/m)*b << nL;
            }
        }
        else
        {
            cout << min((n/m)*b + (n%m)*a, (ll)ceil((float)n/m)*b) << nL;
        }
    }
    else
    {
        cout << n*a << nL;
    }
    return 0;
}

