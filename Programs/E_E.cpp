#include <iostream>
#include <unordered_map>

int countDivisors(int num) {
    int count = 1;
    int i = 2;
    while (i * i <= num) {
        int factorCount = 0;
        while (num % i == 0) {
            factorCount++;
            num /= i;
        }
        count *= (factorCount + 1);
        i++;
    }
    if (num > 1) {
        count *= 2; // num is prime
    }
    return count;
}

int main() {
    // Input
    int n;
    std::cin >> n;

    // Count Shichi-Go numbers
    int shichiGoCount = 0;
    for (int i = 1; i <= n; i++) {
        int divisorsCount = countDivisors(i);
        if (divisorsCount == 75) {
            shichiGoCount++;
        }
    }

    // Output
    std::cout << shichiGoCount << std::endl;

    return 0;
}
