/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 15 March, 2024 | 15.30.29
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

bool isPrime(ll n) 
{
    if (n <= 1) 
        return false;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    for (ll i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    if (isPrime(n))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}