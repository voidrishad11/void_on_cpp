#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
#define MOD_INV_2 499122177 // Modular inverse of 2 modulo 998244353
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll N;
    cin >> N;
    
    vector<ll> red_weights(N), green_weights(N);
    vector<ll> expected_weights(N);

    // Read red and green apple weights
    for (ll i = 0; i < N; i++) {
        cin >> red_weights[i];
    }
    for (ll i = 0; i < N; i++) {
        cin >> green_weights[i];
    }

    // Calculate expected weight for each box and store
    for (ll i = 0; i < N; i++) {
        expected_weights[i] = (red_weights[i] + green_weights[i]) % MOD * MOD_INV_2 % MOD;
    }

    // Sort expected weights in descending order
    sort(expected_weights.rbegin(), expected_weights.rend());

    // Compute prefix sums
    vector<ll> prefix_sums(N + 1, 0);
    for (ll i = 1; i <= N; i++) {
        prefix_sums[i] = (prefix_sums[i - 1] + expected_weights[i - 1]) % MOD;
    }

    // Output the results for each K from 1 to N
    for (ll K = 1; K <= N; K++) {
        cout << prefix_sums[K] << " ";
    }
    cout << "\n";

    return 0;
}
