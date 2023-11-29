#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input values
    int N, K;
    cin >> N >> K;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    // Process the input to find and print the minimum values in each group
    for (int i = 0; i < N; i += K) {
        // Determine the size of the current group
        int groupSize = min(K, N - i);

        // Find and print the minimum value in the current group
        int minValue = *min_element(numbers.begin() + i, numbers.begin() + i + groupSize);
        cout << minValue << " ";
    }

    cout << endl;

    return 0;
}
