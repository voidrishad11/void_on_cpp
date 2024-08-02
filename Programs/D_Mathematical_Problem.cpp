#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int middle = n / 2;
        int upper_limit = pow(10, middle);

        vector<int> palindromes;
        for (int i = 1; i < upper_limit; ++i) {
            string s = to_string(i);
            string palindrome = s;
            reverse(s.begin(), s.end());
            palindrome += s.substr(n % 2, middle);  // Adjust for odd n

            int num = stoi(palindrome);
            palindromes.push_back(num);

            if (palindromes.size() == n) {
                break;
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << palindromes[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
