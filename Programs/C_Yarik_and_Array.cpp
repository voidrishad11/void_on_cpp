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

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int currentSum = a[i];

            for (int j = i + 1; j < n; j++) {
                if ((a[j - 1] % 2 == 0 && a[j] % 2 != 0) || (a[j - 1] % 2 != 0 && a[j] % 2 == 0)) {
                    currentSum += a[j];
                } else {
                    break;  // Break if the parities are not alternating
                }
            }

            sum = max(sum, static_cast<long long>(currentSum));
        }

        cout << sum << "\n";
    }

    return 0;
}
