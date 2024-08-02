#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_operations_to_sort(vector<int>& arr) {
    int n = arr.size();

    // Check if the array is already sorted
    bool sorted = is_sorted(arr.begin(), arr.end());
    if (sorted) {
        return 0; // No operations needed if the array is already sorted
    }

    // Check if sorting is possible
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }

    if (count == 0 || count == n - 1) {
        return 1; // Sorting is possible with just one operation (either Shift or Reverse)
    } else {
        return -1; // Sorting is impossible
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = min_operations_to_sort(arr);
        cout << result << endl;
    }

    return 0;
}
