/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 26 May, 2024 | 23.03.45
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (b[i] != a[i])
            {
                if (b[i] == 'G' && a[i] == 'B')
                {
                    cnt ++;
                }
                else if (b[i] == 'B' && a[i] == 'G')
                {
                    cnt ++;
                }
                else
                {
                    cnt = 0;
                }
            }
            else
            {
                cnt ++;
            }
        }
        // cout << cnt;
        if (cnt == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}