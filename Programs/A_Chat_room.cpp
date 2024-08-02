/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 07 January, 2024 | 15.28.23
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
    string s;
    cin >> s;
    bool flag = true;
    vll a(5);
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    a[4] = 0;
    a[0] = 0;
    ll c = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h' && c == 0)
        {
            a[0] = i;
            c++;
        }
        else if (s[i] == 'e' && c == 1)
        {
            a[1] = i;
            c++;
        }
        else if (s[i] == 'l' && c == 2)
        {
            a[2] = i;
            c++;
        }
        else if (s[i] == 'l' && c == 3)
        {
            a[3] = i;
            c++;
        }
        else if (s[i] == 'o' && c == 4)
        {
            a[4] = i;
            c++;
        }
    }
    // cout << a[0] << a[1] << a[2] << a[3] << a[4] ;
    if ((a[0] < a[1]) && (a[1] < a[2]) && (a[2] < a[3]) && (a[3] < a[4]))
    {
        cout<<"YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    
    return 0;
}