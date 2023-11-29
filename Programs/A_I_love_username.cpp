#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int amazing_count = 0;

    // Initialize with the first performance
    int best_performance = a[0];
    int worst_performance = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > best_performance) {
            best_performance = a[i];
            amazing_count++;
        } else if (a[i] < worst_performance) {
            worst_performance = a[i];
            amazing_count++;
        }
    }

    cout << amazing_count << "\n";
    return 0;
}
