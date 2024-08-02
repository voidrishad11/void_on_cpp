#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1e5 + 5;
bool isBinaryDecimal[MAX_N];

void precompute() {
    // Mark all numbers from 1 to 2^17 that are binary decimals
    for (int i = 1; i < MAX_N; ++i) {
        int num = i;
        bool isBinary = true;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && digit != 1) {
                isBinary = false;
                break;
            }
            num /= 10;
        }
        isBinaryDecimal[i] = isBinary;
    }
}

bool isDivisible(int n) {
    // Check if n can be represented as a product of binary decimals
    for (int i = 1; i < MAX_N; ++i) {
        if (isBinaryDecimal[i] && n % i == 0 && n / i < MAX_N && isBinaryDecimal[n / i]) {
            return true;
        }
    }
    return false;
}

int main() {
    precompute(); // Precompute binary decimals
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isDivisible(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
