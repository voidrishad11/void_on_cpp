/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 30 August, 2024 | 22:33:33 GMT +6
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
    while(tc--) 
    {
        ll n;
        cin >> n;
        vll a(n+1);
        vll b;
        for (ll i = 1; i < n+1; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i < n+1; i++)
        {
            for (ll j = i+1; j < n+1; j++)
            {
                b.push_back(a[i] + a[j] + j - i);
            }
        }
        sort(all(b));
        cout << b[0] << nL;
    }
    return 0;
}
