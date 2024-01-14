#include <iostream>
#include <vector>
#include <algorithm>

int findMaxSubstringLength(const std::string& s) {
    int n = s.size();
    std::vector<int> lps(n, 0);

    // Compute the Longest Prefix Suffix (LPS) array
    int len = 0;
    int i = 1;

    while (i < n) {
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    // Check if there is a substring with the same prefix and suffix
    int maxLen = lps[n - 1];
    if (maxLen == 0) {
        return -1;  // No such substring exists
    }

    // Check if the substring is not a prefix or suffix
    for (int i = 1; i < n - 1; i++) {
        if (lps[i] == maxLen) {
            return -1;  // Substring is either prefix or suffix
        }
    }

    return maxLen;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        int result = findMaxSubstringLength(s);
        std::cout << result << std::endl;
    }

    return 0;
}
