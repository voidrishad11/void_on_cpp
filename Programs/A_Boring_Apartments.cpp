/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 19 May, 2024 | 19.30.49
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll cnt = 0;
        vll a = {1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
        ll temp = 0;
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i]==k)
            {
                temp = i+1;
                temp %= 4;
                if ( temp == 0 )
                {
                    cnt += 4;
                }
                else
                {
                    cnt += temp;
                }
                // cout << cnt << " ";
                break;
            }
            else
            {
                temp = i+1;
                temp %= 4;
                if ( temp == 0 )
                {
                    cnt += 4;
                }
                else
                {
                    cnt += temp;
                }
                // cout << cnt << " ";
            }
        }
        cout << cnt << nL;
    }
    return 0;
}