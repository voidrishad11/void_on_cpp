
/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 31 December, 2023 | 22.35.32
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
    ll n,m;
    cin >> n >> m;

    vll a(n);
    vll f(m + 1, 0);  // Initialize frequency array with zeros. ekhane 1 barai nisi cause ami zero use korte parbo na, tai barle dan dike beshi newa lagbe

    for (ll i = 0; i < n; i++) 
    {
        cin >> a[i];
        f[a[i]]++;
        // that means the a'th position will be ++ as the input occurs
    }

    // Output the f of each number from 1 to M Jehetu 0 kono value nai amar
    for (ll i = 1; i <= m; i++) 
    {
        cout << f[i] << endl;
    }

    return 0;
}
