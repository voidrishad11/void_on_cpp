/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 30 August, 2024 | 22:46:35 GMT +6
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
        ll n;
        cin >> n;
        vll arr(n);
        vll b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // Iterate through all possible subarrays
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                // Print the subarray arr[i..j]
                for (int k = i; k <= j; ++k) {
                    b.push_back(arr[k]);
                }
                sort(all(b));
                reverse(all(b));
                cout << b[0] << " ";
                b.clear();
            }
        }
        cout << nL;
    }
    return 0;
}
