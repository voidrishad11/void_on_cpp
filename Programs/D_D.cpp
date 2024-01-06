#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    long long t, n, k, sum1, sum2;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        sum1 = 0;
        sum2 = 0;
        sort(a.begin(), a.end(), greater<int>());

        for (long long i = 0; i < n; i++) {
            if ((i % 2 == 0) && i != n - 1) {
                sum1 = sum1 + a[i];
            } else {
                sum2 = sum2 + a[i];
            }
        }

        long long ans = max(sum1, sum2);
        cout << ans << "\n";
    }
    return 0;
}
