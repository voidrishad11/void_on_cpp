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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}