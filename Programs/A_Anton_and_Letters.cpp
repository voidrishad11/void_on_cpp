#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    long long size = 0;
    vector<long long> a;
    char c;

    while (1) {
        cin >> c;
        if (c == '}') {
            break;
        }
        if (c >= 'a' && c <= 'z') {
            a.push_back(c - '0');  // Convert character to integer
        }
    }
    sort(a.begin(), a.end());
    auto it = unique(a.begin(), a.end());
    a.erase(it, a.end());
    size = a.size();
    
    cout << size << "\n";

    return 0;
}
