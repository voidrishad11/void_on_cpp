#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> weights(n);

        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }

        sort(weights.begin(), weights.end());

        long long maxDiff = 0;

        for (int i = 0; i < n / 2; i++) {
            long long diff = weights[n - i - 1] - weights[i];
            maxDiff = max(maxDiff, diff);
        }

        cout << maxDiff << "\n";
    }

    return 0;
}
