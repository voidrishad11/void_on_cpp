/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Monday | 20 January, 2025 | 03:25:07 GMT +6
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
    ll n,s;
    double sum = 0.00000000;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        sum += s;
    }
    cout << fixed << setprecision(12);
    cout << sum/n << nL;
    return 0;
}
