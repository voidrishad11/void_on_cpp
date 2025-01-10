/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 03 September, 2024 | 20:44:06 GMT +6
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
        vll ans(n);
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (ll i = 0; i < 4; i++)
            {
                if (s[i] == '#')
                {
                    ans.push_back(i+1);
                    break;
                }
            }
        }
        reverse(all(ans));
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] <<" ";
        }
        cout << nL;
    }
    return 0;
}
