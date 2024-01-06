/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 30 December, 2023 | 22.54.15
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
    int n,m,x=1000;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
         cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<=m-n;i++)
    {
        x=min(x,a[i+n-1]-a[i]);
    }
    cout<<x;
    return 0;
}
