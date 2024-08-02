#include <iostream>
using namespace std;

int main() {
    long long n, c = 0, left;
    cin >> n;
    left = n;

    c += left / 100;  // Use as many 100-denomination notes as possible
    left %= 100;      // Update the remaining amount

    c += left / 50;   // Use as many 50-denomination notes as possible
    left %= 50;       // Update the remaining amount

    c += left / 20;   // Use as many 20-denomination notes as possible
    left %= 20;       // Update the remaining amount

    c += left / 10;   // Use as many 10-denomination notes as possible
    left %= 10;       // Update the remaining amount

    c += left / 5;    // Use as many 5-denomination notes as possible
    left %= 5;        // Update the remaining amount

    c += left;         // The remaining amount can be represented with 1-denomination notes

    cout << c << "\n";
    return 0;
}
