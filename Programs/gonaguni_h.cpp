#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
typedef long long ll;

// Function for modular exponentiation
ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        ll N, M, K;
        cin >> N >> M >> K;

        ll cells = N * M;
        
        // If we have only one cell, we can use any color
        if (cells == 1) {
            cout << K % MOD << "\n";
            continue;
        }

        // Calculate the total number of colorings
        ll total_ways = (K * mod_exp(K - 1, cells - 1, MOD)) % MOD;
        
        cout << total_ways << "\n";
    }

    return 0;
}
