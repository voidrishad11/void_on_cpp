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
        for (ll i = 0; i <= last; i++)
        {
            a.push_back(i);
        }
        for (ll i = 0; i < n; i++)
        {
            ll aa = 0,bb = 0;
            cin >> aa >> bb;
            for (ll j = aa+1; j < bb; j++)
            {
                a[j] = last+3;
            }
        }
        for (ll i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << nL;
        // ll time = 0;
        // vll times;
        // for (ll i = 0; i <= last; i++)
        // {
        //     if (a[i] != last+3)
        //     {
        //         for (ll j = i; ; j++)
        //         {
        //             if (a[j] != last+3)
        //             {
        //                 time ++;
        //             }
        //             else break;
        //         }
        //         times.push_back(time);
        //         time = 0;
        //     }
        //     cout << a[i] << " ";
        // }
        // sort(all(times));
        // reverse(all(times));
        // if (times[0] >= s)
        // {
        //     cout << "YES" << times[0] << nL;
        // }
        // else
        // {
        //     cout << "NO" << times[0] << nL;
        // }
        // times.clear();
        // // cout << nL;
    }
    return 0;
}
