/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 16 May, 2025 | 21:13:22 GMT +6
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
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    vll tasks(m);

    for (ll i = 0; i < m; i++) {
        cin >> tasks[i];
    }

    ll time = 0;
    ll pos = 1; // starting at house 1

    for (ll i = 0; i < m; i++) 
    {
        if (tasks[i] >= pos) 
        {
            time += tasks[i] - pos;
        } else 
        {
            time += n - (pos - tasks[i]);
        }
        pos = tasks[i]; // update current position
    }

    cout << time << "\n";

    return 0;
}
