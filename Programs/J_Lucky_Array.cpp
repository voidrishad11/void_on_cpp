#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    long long n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find the minimum element
    long long minElement = *min_element(a.begin(), a.end());

    // Count the occurrences of the minimum element
    long long countMin = count(a.begin(), a.end(), minElement);

    // Output "Lucky" if count is odd, otherwise "Unlucky"
    if (countMin % 2 == 1) {
        cout << "Lucky\n";
    } else {
        cout << "Unlucky\n";
    }

    return 0;
}
