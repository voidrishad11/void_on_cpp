#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the beauty factor of a beautiful array
int calculateBeautyFactor(const vector<int>& arr, int start, int end) {
    return (end - start + 1) / 2;
}

// Function to find the maximum beauty factor of the array
int maxBeautyFactor(const vector<int>& arr) {
    int n = arr.size();
    int maxBeauty = -1;

    for (int i = 1; i < n - 1; ++i) {
        // Check if arr[i] is a peak
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            int left = i;
            int right = i;

            // Extend left
            while (left > 0 && arr[left] > arr[left - 1]) {
                left--;
            }

            // Extend right
            while (right < n - 1 && arr[right] > arr[right + 1]) {
                right++;
            }

            // Calculate beauty factor
            int beauty = calculateBeautyFactor(arr, left, right);
            maxBeauty = max(maxBeauty, beauty);
        }
    }

    return maxBeauty;
}

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int maxBeauty = maxBeautyFactor(arr);

        cout << "Case " << tc << ": " << maxBeauty << endl;
    }

    return 0;
}
