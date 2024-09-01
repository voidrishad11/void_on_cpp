/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Wednesday | 28 August, 2024 | 23:50:00 GMT +6
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


int main() 
{
    fast;
    ll tc;
    cin >> tc;
    while(tc--) 
    {
        ll n, k;
        cin >> n >> k;
        vs grid(n);

        for(ll i = 0; i < n; i++) 
        {
            cin >> grid[i];
        }

        for(ll i = 0; i < n; i += k) 
        {
            for(ll j = 0; j < n; j += k) 
            {
                cout << grid[i][j];
            }
            cout << nL;
        }
    }
    return 0;
}
