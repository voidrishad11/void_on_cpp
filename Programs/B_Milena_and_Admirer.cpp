#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int operations = 0;
        int prev = a[0];

        for (int i = 1; i < n; ++i) {
            if (a[i] < prev) {
                operations += prev - a[i];
            } else {
                prev = a[i];
            }
        }

        cout << operations << endl;
    }

    return 0;
}
