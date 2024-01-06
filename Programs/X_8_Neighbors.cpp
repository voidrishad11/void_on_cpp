/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 31 December, 2023 | 23.23.29
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
    ll n, m, a, b, c = 0;
    cin>>n>>m;
    char mat[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }
    cin>>a>>b;
    a-=1;
    b-=1;
    if (a>1)
    {
        if (mat[a-1][b] != 'x')
        {
            c++;
        }
    }
    if (a<n)
    {
        if (mat[a+1][b] != 'x')
        {
            c++;
        }
    }
    if (b>1)
    {
        if (mat[a][b-1] != 'x')
        {
            c++;
        }
    }
    if (b<m)
    {
        if (mat[a][b+1] != 'x')
        {
            c++;
        }
    }
    if (a < n && b < m)
    {
        if (mat[a+1][b+1] != 'x')
        {
            c++;
        }
    }
    if (a > 1 && b > 1)
    {
        if (mat[a-1][b-1] != 'x')
        {
            c++;
        }
    }
    if (a < n && b > 1)
    {
        if (mat[a+1][b-1] != 'x')
        {
            c++;
        }
    }
    if (a > 1 && b < m)
    {
        if (mat[a-1][b+1] != 'x')
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
    return 0;
}