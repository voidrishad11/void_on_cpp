/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 25 April, 2025 | 03:01:10 GMT +6
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
    string x,y = "";
    cin >> x;
    bool flag = false;
    for (ll i = 0; i < x.size(); i++)
    {
        ll a = x[i] - '0';
        if (a == 9 && i == 0)
        {
            flag = true;
        }
        if (a > 9 - a && !flag)
        {
            cout << 9-a;
        }
        else
        {
            cout << a;
            flag = false;
        }
    }
    cout << nL;
    return 0;
}
