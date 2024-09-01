/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 23 August, 2024 | 23:07:58 GMT +6
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
#define a first
#define b second
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
        ll n,x,y;
        cin >> n >> x >> y;
        bool flag = true;
        ll cost = 0;
        if (x*2 < y)
        {
            flag = false;
        }
        if (flag)
        {
            cost += (n/2)*y;
            cost += (n%2)*x;
        }
        else
        {
            cost += n*x;
        }
        cout << cost << nL;
    }
    return 0;
}
