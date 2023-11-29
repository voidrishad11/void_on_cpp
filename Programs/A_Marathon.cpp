#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool descendingSort(long long a, long long b) {
    return a >= b; // Compare in descending order
}

int main() {
    long long n;
    cin >> n;

    for (long long j = 1; j <= n; j++) {
        vector<long long> a(4);

        for (long long i = 0; i < 4; i++) {
            cin >> a[i];
        }

        long long temp = a[0];
        sort(a.begin(), a.end(), descendingSort);

        for (long long i = 0; i < 4; i++) {
            if (a[i] == temp) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
