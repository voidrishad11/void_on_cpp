/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Monday | 19 May, 2025 | 19:15:53 GMT +6
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
    ll n,t;
    cin >> n >> t;
    ll ans = 0;
    string s = "";
    for (ll i = 0; i < n; i++)
    {
        s += '9';
    }
    ll highestNumber = std::stoi(s);
    // cout << highestNumber << nL;
    for (ll i = 1; i <= highestNumber; i++)
    {
        if (i % t == 0)
        {
            ans++;
        }
    }
    cout << ans << nL;
    return 0;
}
