/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 09 November, 2024 | 15:51:29 GMT +6
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
    ll T;
    cin >> T;
    while (T--) 
    {
        ll X, Y, Z;
        cin >> X >> Y >> Z;

        ll s = (X + Y + Z) / 2;
        ll a_sq = s * (s - X) * (s - Y) * (s - Z);
        ll s_sq = s * s;

        ll num = a_sq;
        ll den = s_sq;

        ll gcd = std::gcd(num, den);
        num /= gcd;
        den /= gcd;

        cout << num << "/" << den << nL;
    }
    return 0;
}
