/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Sunday | 27 April, 2025 | 01:33:42 GMT +6
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
    ll n,a,b;
    cin >> n >> a >> b;
    cout << n - max(a, n - b - 1) << '\n';
    return 0;
}
