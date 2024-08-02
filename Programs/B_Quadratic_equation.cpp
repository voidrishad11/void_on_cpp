/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 28 June, 2024 | 19.11.22
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
    ll a, b, c;
    cin >> a >> b >> c;
    ll discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        cout << "No roots" << nL;
    }
    else if (discriminant == 0)
    {
        ll root = -b / (2 * a);
        cout << "One root: " << root << nL;
    }
    else
    {
        ll root1 = (-b - sqrt(discriminant)) / (2 * a);
        ll root2 = (-b + sqrt(discriminant)) / (2 * a);
        if (root1 > root2)
        {
            cout << "Two roots: " << root2 << " " << root1 << nL;
        }
        else
        {
            cout << "Two roots: " << root1 << " " << root2 << nL;
        }
    }

    return 0;
}
