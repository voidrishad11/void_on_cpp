#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the greatest common divisor (GCD) of two numbers
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long y, w;
    cin >> y >> w;

    // Find the maximum of y and w
    long long m = max(y, w);

    // Calculate the number of favorable outcomes for Dot
    long long dot_chances = 6 - m + 1;

    // Find the greatest common divisor of dot_chances and 6
    long long common_divisor = gcd(dot_chances, 6);

    // Simplify the fraction
    dot_chances /= common_divisor;
    long long total_outcomes = 6 / common_divisor;

    // Output the result
    cout << dot_chances << "/" << total_outcomes << endl;

    return 0;
}
