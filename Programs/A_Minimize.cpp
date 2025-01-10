/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 03 September, 2024 | 20:37:33 GMT +6
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
        ll a,b,c;
        cin >> a >> b;
        if ( a == b )
        {
            cout << "0\n";
        }
        else
        {
            vll sum;
            for (ll i = a; i <= b; i++)
            {
                sum.push_back((c-a)+(b-c));
            }
            sort(all(sum));
            cout << sum[0] << nL;
        }
    }
    return 0;
}
