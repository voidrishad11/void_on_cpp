/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 06 February, 2024 | 21.32.38
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,k;
        cin >> a>> b >> k;
        vll aa(a),bb(b);
        for (ll i = 0; i < a; i++)
        {
            cin >> aa[i];
        }
        for (ll i = 0; i < b; i++)
        {
            cin >> bb[i];
        }

        sort(aa.begin(),aa.end());
        auto it = unique(aa.begin(),aa.end());
        aa.erase(it,aa.end());

        sort(bb.begin(),bb.end());
        it = unique(bb.begin(),bb.end());
        bb.erase(it,bb.end());

        ll count = 0;
        auto it1 = aa.begin();
        auto it2 = bb.begin();
        while (it1 != aa.end() && it2 != aa.end()) 
        {
            if (*it1 == *it2) 
            {
                count++;
                it1++;
                it2++;
            } 
            else if (*it1 < *it2) 
            {
                it1++;
            } 
            else 
            {
                it2++;
            }
        }
        cout<<count<<"\n";
        vll c(k);
        for (ll i = 0; i < k; i++)
        {
            c[i] = i+1;
        }
        ll c1 = 0,c2 = 0;
        for (ll i = 0; i < (max(a,b)); i++)
        {
            if (aa[i] == c[i])
            {
                // c[i] = 0;
                c1 ++;
            }
            if (bb[i] == c[i])
            {
                // c[i] = 0;
                c2 ++;
            }
        }
        if (c1<k/2 || c2<k/2)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}