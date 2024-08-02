/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 11 January, 2024 | 16.42.52
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
    string s, newStr;
    cin >> s;

    while (s.length() != 0)
    {
        if (s.length() % 2 == 0)
        {
            size_t e = (s.length() / 2) - 1;
            char c = s[e];
            newStr = newStr + c;
            s.erase(e, 1);
        }
        else
        {
            size_t e = (s.length()) / 2;
            char c = s[e];
            newStr = newStr + c;
            s.erase(e, 1);
        }
    }

    cout << newStr << "\n";

    return 0;
}