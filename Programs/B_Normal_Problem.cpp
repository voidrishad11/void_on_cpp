/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Sunday | 12 January, 2025 | 02:00:46 GMT +6
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
        string s,ss;
        cin >> s;
        for (ll i = s.size()-1; i >= 0; i--)
        {
            if (s[i] == 'p') ss+='q';
            else if (s[i] == 'q') ss+='p';
            else ss+='w';
        }
        cout << ss << nL;
        ss = "";
    }
    return 0;
}
