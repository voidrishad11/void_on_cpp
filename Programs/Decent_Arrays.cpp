#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() 
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end());
    if(a == b)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}