/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 11 January, 2024 | 16.56.51
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
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    ll sum = 0, dif = 0;

    for (ll i = 0; i < n; i++)
    {
        dif = abs(s1[i] - s2[i]);
        if (dif > 5)
        {
            dif = 5 - (dif - 5);
            sum = sum + dif;
        }
        else
        {
            sum = sum + dif;
        }
    }
    cout << sum << "\n";
    return 0;
}
