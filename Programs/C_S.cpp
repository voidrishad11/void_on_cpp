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

ll power(ll x, ll n) 
{
    ll result = 1;
    while (n > 0) 
    {
        if (n % 2 == 1) 
        {
            result = (result * x) % MOD;
        }
        x = (x * x) % MOD;
        n /= 2;
    }
    return result;
}

int main() 
{
    ll x, n;
    cin >> x >> n;
    ll result = power(x, n);
    cout << result << endl;
    return 0;
}
