/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 13 August, 2024 | 04:03:51 GMT +6
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = n-1;
        for(ll i = 0 ; i < n-1 ; i++)
        {
            if(s[i]==s[i+2])ans--;
        }
        cout << ans << nL;
    }
    return 0;
}