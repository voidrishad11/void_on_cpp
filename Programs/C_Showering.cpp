/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 13 August, 2024 | 02:09:41 GMT +6
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
        ll n, s, last;
        cin >> n >> s >> last;
        vll a;
        vll tasks;
        tasks.push_back(0);
        for (ll i = 0; i < n; i++)
        {
            ll aa = 0, bb = 0;
            cin >> aa >> bb;
            tasks.push_back(aa);
            tasks.push_back(bb);
        }
        tasks.push_back(last);
        // for (ll i = 0; i < tasks.size(); i++)
        // {
        //     cout << tasks[i] << " ";
        // }
        // cout << nL;
        ll time = 0;
        vll intervals;
        for (ll i = 0; i < tasks.size(); i+=2)
        {
            intervals.push_back(tasks[i+1]-tasks[i]);
        }
        sort(all(intervals));
        reverse(all(intervals));
        if (intervals[0] >= s)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
