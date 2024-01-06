#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    vector<int> backtrack(n);
    vector<int> forward(n);
    vector<int> final(n);
    for (int i = 0; i < n; i++) 
    {
        if (a[i] == 0) 
        {
            nearestZero = i;
        }
        if (nearestZero != -1) 
        {
            distances[i] = min(distances[i], i - nearestZero);
        }
    }
    for (int i = 0; i < n; i++) 
    {
        if (a[i] == 0) 
        {
            nearestZero = i;
        }
        if (nearestZero != -1) 
        {
            distances[i] = min(distances[i], i - nearestZero);
        }
    }

    // Backward pass: find distance to the nearest zero on the right
    nearestZero = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == 0) {
            nearestZero = i;
        }
        if (nearestZero != -1) {
            distances[i] = min(distances[i], nearestZero - i);
        }
    }

    // Output the distances
    for (int i = 0; i < n; ++i) {
        cout << distances[i] << " ";
    }

    return 0;
}
