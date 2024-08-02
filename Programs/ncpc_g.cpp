/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 20 February, 2024 | 17.12.42
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
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

bool compareSecond(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n),b(n);
        vector<pair<ll,ll>> c;
        ll x,y;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin>>b[i];
            for (ll j = 0; j < n; j++)
            {
                if (a[j] == b[i])
                {
                    x = i;
                    y = j;
                    pair<ll, ll> p = {x, y};
                    c.push_back(p);
                } 
            }
        }
        sort(all(c),compareSecond);
        // for (const auto& i : c) 
        // {
        //     cout << "(" << i.first << ", " << i.second << ")" << endl;
        // }
        // for (ll i = 0; i < n-1; i++)
        // {
        //     for (ll j = 0; j < count; j++)
        //     {
        //         /* code */
        //     }
        // }
        
        cout<<nL;
        ll l,r;
        ll cnt = 0;
        bool flag1 = true;
        ll flag2 = 0;
        ll flag3 = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                flag2 ++ ;
            }
            else if (a[i] != b[i])
            {
                flag3 ++ ;
            }
        }

        if (flag2 != n && flag3 != n)
        {
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == b[i])
                {
                    if ((a[i+1] == b[n-1]) && flag1)
                    {
                        cnt = n-1 - i+1;
                        flag1 = false;
                    }
                    else if (a[i+1] == b[i+1])
                    {
                        cnt = n-1 - i+1;
                    }
                } 
            }
            cout<<cnt<<nL;
        }
        else if (flag2 == n)
        {
            cout<<0<<nL;
        }
        else if (flag3 == n)
        {
            cout<<n<<nL;
        }
    }
    return 0;
}