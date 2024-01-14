
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
    string s;
    cin >> s;

    array<ll, 10> f = {0};

    for (char c : s)
    {
        f[c - '0']++;
    }
    ll mf = 0;
    ll md = -1;
    for (ll i = 0; i < 10; ++i) 
    {
        if (f[i] > mf || (f[i] == mf && i < md))
        {
            mf = f[i];
            md = i;
        }
    }
    cout << md << "\n";
    return 0;
}
