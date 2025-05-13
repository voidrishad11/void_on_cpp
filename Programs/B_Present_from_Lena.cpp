/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Wednesday | 30 April, 2025 | 05:34:02 GMT +6
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
    fast;
    ll n;
    cin >> n;

    for (ll i = 0; i <= n; i++) 
    {
        // Print leading spaces
        for (ll j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (ll k = 0; k <= i; k++) {
            cout << k;
            if (k < i) cout << " "; // Add space between numbers
        }

        // Print decreasing numbers
        for (ll k = i - 1; k >= 0; k--) {
            cout << " " << k;
        }
        cout << nL; // Move to the next line
    }


    for (ll i = n-1; i >= 0; i--) 
    {
        // Print leading spaces
        for (ll j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (ll k = 0; k <= i; k++) {
            cout << k;
            if (k < i) cout << " "; // Add space between numbers
        }

        // Print decreasing numbers
        for (ll k = i - 1; k >= 0; k--) {
            cout << " " << k;
        }
        cout << nL; // Move to the next line
    }
    return 0;
}
