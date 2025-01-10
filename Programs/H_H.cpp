/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 19 October, 2024 | 20:21:01 GMT +6
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
#define MOD 998244353
#define nL "\n"
#define pb push_back
#define mk make_pair
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const long long MAX_N = 1LL << 30;

// Function to perform the operations and calculate the cycle length
int calculateCycle(int k, int N) {
    unordered_map<int, int> seen;  // To track the position where each number is seen
    ll steps = 0;
    ll original = k;

    while (true) 
    {
        if (seen.find(k) != seen.end()) 
        {
            return steps - seen[k];  // Return the cycle length
        }
        seen[k] = steps;

        if (k % 2 == 0) 
        {
            k = k / 2 + (1 << (N - 1));  // Even operation
        } 
        else 
        {
            k = (k - 1) / 2;  // Odd operation
        }
        
        steps++;

        if (k == original) 
        {
            return steps;  // It returned to the original value
        }
    }
    return 0;  // If it never returns to the original value
}

int main() 
{
    ll N;
    string X;
    cin >> N >> X;

    // Convert binary string X to an integer
    ll x_val = 0;
    for (char c : X) {
        x_val = x_val * 2 + (c - '0');
    }

    ll total_sum = 0;

    // Compute the sum of cycle lengths for each k in the range [0, X]
    for (ll k = 0; k <= x_val; k++) {
        total_sum = (total_sum + calculateCycle(k, N)) % MOD;
    }

    cout << total_sum << nL;

    return 0;
}
