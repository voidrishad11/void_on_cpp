/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 15 May, 2024 | 16.17.44
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
    ll n,k;
    cin >> n >> k;
    vll a(k+2);
    vector<double>b;
    double temp;
    bool flag0 = false;
    bool flagl = false;
    
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==0)
        {
            flag0 = true;
        }
        if(a[i]==k)
        {
            flagl = true;
        }
    }

    if(!flag0) a.push_back(0);
    if(!flagl) a.push_back(k);
    

    sort(all(a));
    auto it = unique(all(a));
    a.erase(it, a.end());
    
    for (ll i = 0; i < a.size()-1; i++)
    {
        if (i==0)
        {
            temp = a[i+1]-a[i];
            if (flag0)
            {
                temp/=2.0;
                b.push_back(temp);
            }
            else
            {
                b.push_back(temp);
            }
        }
        else if (i == a.size()-2)
        {
            temp = a[i+1]-a[i];
            if (flagl)
            {
                temp/=2.0;
                b.push_back(temp);
            }
            else
            {
                b.push_back(temp);
            }
        }
        else
        {
            temp = a[i+1]-a[i];
            temp/=2.0;
            b.push_back(temp);
        }
        // cout << temp << " ";
    }

    sort(all(b));
    reverse(all(b));
    cout << fixed << setprecision(10);
    cout << b[0] <<nL;
    return 0;
}