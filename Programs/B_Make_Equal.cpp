/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 13 February, 2024 | 21.44.34
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#define read(type) readInt<type>()
#define front(i,a,n) for(ll i=a;i<=n;i++)
#define back(i,a,n) for(ll i=n;i>=a;i--)
#define nL "\n"
#define ll long long int
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define ff first
#define ss second
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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main ()
{
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;

        vll a(n);
        ll sum = 0;

        for (ll i = 0; i < n; ++i) 
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0) 
        {
            cout << "NO" << endl;
            continue;
        }
        sum /= n;
        ll f = 0;
        bool flag = true;
        for (ll i = 0; i < n; ++i) 
        {
            f += a[i] - sum;
            if (f < 0) 
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}