/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 09 November, 2024 | 16:36:56 GMT +6
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
    int tc;
    cin >> tc;

    for (ll tt = 1; tt <= tc; tt++)
    {
        ll n, k;
        cin >> n >> k;

        if ( k == 1 )
        {
            cout << "Case " << tt << ": Evenius"<< nL;
        }
        else
        {
            cout << "Case " << tt << ": Oddius"<< nL;
        }
    }
    return 0;
}
