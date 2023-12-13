#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, p = 0, m = 0, s = 0, j = 0, k = 0, l = 0, most, q;
    cin >> n;
    vector<long long> a(n);
    vector<long long> pr(n);
    vector<long long> ma(n);
    vector<long long> sp(n);

    for (long long i = 0; i < n; i++) 
    {
        cin >> a[i];
        if (a[i] == 1) 
        {
            p++;
            pr[j] = i + 1;  // Store the 1-indexed position
            j++;
        } 
        else if (a[i] == 2) 
        {
            m++;
            ma[k] = i + 1;  // Store the 1-indexed position
            k++;
        } 
        else if (a[i] == 3) 
        {
            s++;
            sp[l] = i + 1;  // Store the 1-indexed position
            l++;
        }
    }
    most = min(p, min(m, s));  // Find the minimum count among the three skill groups
    cout << most << "\n";
    for (long long i = 1, q = 0; i <= most; i++) 
    {
        cout << pr[q] << " " << ma[q] << " " << sp[q] << "\n";
        q++;
    }
    return 0;
}
