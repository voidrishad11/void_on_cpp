/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 09 November, 2024 | 15:14:56 GMT +6
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
    ll tc;
    cin >> tc;
    for (ll tt = 1; tt <= tc; tt++)
    {
        ll n,k;
        ll cnt = 0;
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            ll x,y;
            cin >> x >> y;
            cnt += k/x;
        }
        cout << "Case "<<tt<<": "<< cnt<<nL;
    }
    
    return 0;
}
