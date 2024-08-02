/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 12 January, 2024 | 11.44.12
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

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll a, r, n;
        cin >> a >> r >> n;
        ll result = a % 1000003;
        for (ll i = 1; i < n; i++) 
        {
            result = (result * r) % 1000003;
            result = (result + a) % 1000003;
        }
        cout << result << endl;
    }
    return 0;
}
