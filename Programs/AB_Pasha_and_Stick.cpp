/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 08 January, 2024 | 16.54.54
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
    if (n % 2 == 0)
    {
        if (n % 4 == 0)
        {
            cout<<n/4 -1 <<"\n";
        }
        else
        {
            cout<<n/4<<"\n";
        }
    }
    else
    {
        cout<<"0\n";
    }
    return 0;
}