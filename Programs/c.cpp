#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
    long long maxSum;
    int moves;
};

Result findMaxConsecutiveSubarraySum(vector<int>& arr) {
    long long maxSum = arr[0];
    long long currentSum = arr[0];
    int moves = 0;

    for (int i = 1; i < arr.size(); ++i) {
        currentSum = max((long long)arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return {maxSum, moves};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int testCase = 1; testCase <= t; ++testCase) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        Result result = findMaxConsecutiveSubarraySum(arr);

        cout << "Case " << testCase << ": " << result.maxSum << " " << result.moves << endl;
    }

    return 0;
}
