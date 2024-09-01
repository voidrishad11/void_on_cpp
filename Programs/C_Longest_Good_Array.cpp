/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Sunday | 01 September, 2024 | 21:15:42 GMT +6
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
        ll l, r;
        cin >> l >> r;
        ll i = 1 , j = 1;
        
        for (;l + j <= r;) 
        {
            i++;
            j += i;
            if (l + j > r) 
            {
                break;
            }
        }
        cout << i << nL;
    }
    return 0;
}
