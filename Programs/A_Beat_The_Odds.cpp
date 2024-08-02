#include <bits/stdc++.h>
/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 15 January, 2024 | 20.13.14
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
    int t;
    cin >> t;
    ll rem = 0;
    while (t--) 
    {
        ll n;
        cin >> n;

        vll a(n);
        for (ll i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        bool f = false;
        ll rem = 0;
        ll j = 0;
        for (ll i = 0; i < n && j < n-1; i++) 
        {
            for (ll j = i+1; j < n-1 ; j++) 
            {
                if ((a[i]+ a[j]) %2 == 0)
                {
                    break;
                }
                else
                {
                    rem++;
                    f = true;
                }
                // cout<< a[j] <<" ";
            }
            if (f)
            {
                i = j; 
            }
        }
        cout << rem << "\n";
    }
    return 0;
}
