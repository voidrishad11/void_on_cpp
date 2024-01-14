#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxSubsegmentLength = 1;
    int currentSubsegmentLength = 1;

    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i - 1]) {
            // If the current element is greater than or equal to the previous one,
            // the subsegment is non-decreasing, so update the length.
            currentSubsegmentLength++;
        } else {
            // If the current element is less than the previous one,
            // update the maximum subsegment length and reset the current length.
            maxSubsegmentLength = max(maxSubsegmentLength, currentSubsegmentLength);
            currentSubsegmentLength = 1;
        }
    }

    // Update the maximum subsegment length after the loop (in case it ends with a non-decreasing subsegment).
    maxSubsegmentLength = max(maxSubsegmentLength, currentSubsegmentLength);

    cout << maxSubsegmentLength << endl;

    return 0;
}
