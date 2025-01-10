/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 08 November, 2024 | 17:29:06 GMT +6
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
        char c1,c2;
        cin >> c1 >> c2;
        int as1 = static_cast<int>(c1) - 32;
        int as2 = static_cast<int>(c2) - 32;
        for (ll i = 1; i < 21; i++)
        {
            if (as1%i == as2%i)
            {
                cout<< i <<" "<< ceil(94/i)<<nL;
            }
        }
        cout<<nL;
    }
    return 0;
}
