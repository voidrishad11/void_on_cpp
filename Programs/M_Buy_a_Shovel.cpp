/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 04 January, 2024 | 03.32.14
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
int main() {
    int k, r;
    cin >> k >> r;
    int i = 1;
    int total = k;
    while (total % 10 != 0 && total % 10 != r) 
    {
        i++;
        total += k;
    }
    cout << i << "\n";
    return 0;
}