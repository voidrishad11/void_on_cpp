/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Wednesday | 15 January, 2025 | 04:06:21 GMT +6
---------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define mii map<int, int>
#define si set<int>
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define nL "\n"
#define pb push_back
#define mk make_pair
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main() {
    fast;
    ll n;
    cin >> n;
    vll a(n);
    ll max = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > max) max = a[i];
    }
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        c+= max - a[i];
    }
    cout << c << nL;
    return 0;
}
