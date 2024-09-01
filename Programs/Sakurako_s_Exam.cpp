/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Sunday | 01 September, 2024 | 20:49:58 GMT +6
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
    while (tc--) 
    {
        ll a, b;
        cin >> a >> b;
        ll sum = a + 2 * b;
        if (sum % 2 == 0) 
        {
            if (a == 0 && b % 2 != 0) 
            {
                cout << "NO" << nL;
            } 
            else if (b == 0 && a % 2 != 0) 
            {
                cout << "NO" << nL;
            } 
            else 
            {
                cout << "YES" << nL;
            }
        } 
        else 
        {
            cout << "NO" << nL;
        }
    }
    return 0;
}
