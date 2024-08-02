/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 30 December, 2023 | 20.52.40
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
vll getDivisors(ll n) 
{
    vll divisors;

    for (ll i = 1; i * i <= n; ++i) 
    {
        if (n % i == 0) 
        {
            divisors.push_back(i);
            if (i != n / i) 
            {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,t1,t2;
        cin>>a>>b;
        ll n = b*2;
        while (1)
        {
            vll d = getDivisors(n);
            sort(d.begin(),d.end());
            t1 = d.size() - 2;
            t2 = d.size() - 3;
            if ( d[t1]  == b && d[t2] == a )
            {
                break;
            }
            else
            {
                d.clear();
                n++;
            }
        }
        cout<<n<<"\n";
    }
    return 0;
}