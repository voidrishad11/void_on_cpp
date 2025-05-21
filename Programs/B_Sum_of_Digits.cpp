/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Wednesday | 21 May, 2025 | 19:04:31 GMT +6
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
    string s;
    cin >> s;
    ll spell = 0;
    while (s.size() > 1)
    {
        ll sum = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        spell++;
    }
    cout << spell << nL;
    return 0;
}
