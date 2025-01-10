/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 03 September, 2024 | 21:40:29 GMT +6
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
        ll x,y,k;
        cin >> x >> y >> k;
        ll xl,yl;
        xl = x%k;
        yl = y%k;
        x/=k;
        y/=k;
        ll count = 0;
        count = x+y+xl+yl+(abs(x-y));
        if (xl == 0 && yl == 0)
        {
            count--;
        }
        // else if ((x != 0 && y == 0) || (x == 0 && y != 0))
        // {
        //     count++;
        // }
        cout << count << nL;
    }
    return 0;
}
