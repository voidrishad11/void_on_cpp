/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 02 January, 2024 | 22.32.47
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
    ll l,r,n,sum;
    cin>>l>>r>>n;
    sum = 1;
    for (ll i = l; i <= r; i++)
    {
        sum = sum * i;
    }
    cout<<sum%n<<"\n";
    return 0;
}