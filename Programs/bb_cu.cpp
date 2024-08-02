#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    long long n;
    cin >> n;
    
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long operations = 0;
    for (long long i = 1; i < n; i++) 
    {
        long long diff = a[i] - a[i - 1];
        operations += abs(diff);
    }
    
    cout << operations << endl;
    
    return 0;
}