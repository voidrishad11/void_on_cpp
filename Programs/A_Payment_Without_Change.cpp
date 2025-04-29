/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Wednesday | 30 April, 2025 | 04:28:50 GMT +6
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
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        ll aCoins = a*n;
        
        if (aCoins == s)
        {
            cout << "YES" << nL;
        }
        else if (aCoins < s)
        {
            if (s - aCoins <= b)
            {
                cout << "YES" << nL;
            }
            else
            {
                cout << "NO" << nL;
            }
        }
        else if (aCoins > s)
        {
            if ( n > s )
            {
                if ( b >= s )
                {
                    cout << "YES" << nL;
                }
                else
                {
                    cout << "NO" << nL;
                }
            }
            else if (s - (( s / n ) * n) <= b)
            {
                cout << "YES" << nL;
            }
            else
            {
                cout << "NO" << nL;
            }
        }
    }
    return 0;
}
