#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main() {
    long long m;
    cin >> m;

    for (long long i = 1; i <= m; i++) {
        long long n;
        cin >> n;

        // Convert n to its binary representation
        string bin = bitset<64>(n).to_string();

        // Initialize a count of 1s
        int c = 0;

        // Iterate through the binary string and count 1s
        for (size_t j = 0; j < bin.size(); j++) {
            if (bin[j] == '1') {
                c++;
            }
        }

        // Convert the count back to a decimal number
        string final = to_string(c);
        bitset<64> bits(final);
        long long ans = bits.to_ullong();

        // Print the result for each input
        cout << ans << endl;
    }

    return 0;
}
