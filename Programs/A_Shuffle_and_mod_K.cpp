#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long result = 0;
    for (int i = 1; i < N; ++i) {
        result += (A[i] - A[i - 1] + K) % K;
    }

    cout << result << endl;

    return 0;
}
