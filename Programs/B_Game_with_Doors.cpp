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
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        // Initialize a vector of characters with '.' as the default value
        vector<char> arr(100, '.');

        // Fill the range [a-1, b-1] with 'A'
        for (ll i = a-1; i < b; i++)
        {
            arr[i] = 'A';
        }

        ll m = 0;
        // Fill the range [c-1, d-1] with 'B' or 'M' if overlapping with 'A'
        for (ll i = c-1; i < d; i++)
        {
            if (arr[i] != 'A')
            {
                arr[i] = 'B';
            }
            else
            {
                arr[i] = 'M';
                m++;
            }
        }

        ll ans = m;
        if (m == 0)
        {
            cout << "1\n";
        }
        else
        {
            // Check for adjacent 'M' characters and count neighbors
            for (ll i = a-1; i < d; i++)
            {
                if (arr[i] == 'M')
                {
                    if (arr[i-1] == 'A' || arr[i-1] == 'B' && arr[i-1] != 'M')
                    {
                        ans++;
                    }                    
                    if (arr[i+1] == 'A' || arr[i+1] == 'B' && arr[i-1] != 'M')
                    {
                        ans++;
                    }
                }
            }
            cout << ans << nL;
        }
    }
    return 0;
}
