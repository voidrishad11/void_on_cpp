/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 23 August, 2024 | 23:21:42 GMT +6
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
        vll a(n);
        ll ev = 0,od = 0,ec = 0,oc = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]%2 == 0)
            {
                ec ++;
                ev += a[i];
            }
            else
            {
                oc ++;
                od += a[i];
            }
        }
        if (ev <= od)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
