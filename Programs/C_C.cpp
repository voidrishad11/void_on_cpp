#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        long long minOperations = 0;

        for (int i = 0; i < N / 2; ++i) {
            minOperations += A[N - i - 1] - A[i];
        }

        cout << minOperations << endl;
    }

    return 0;
}
