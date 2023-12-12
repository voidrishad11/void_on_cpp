#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "YES\n";
    } 
    else 
    {
        cout << "NO\n";
    }
    return 0;
}