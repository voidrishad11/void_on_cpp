#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long squares = sqrt(n);
        long long cubes = cbrt(n);
        cout << squares + cubes << "\n";
    }
    return 0;
}
