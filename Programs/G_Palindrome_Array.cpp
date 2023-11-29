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
    vector<long long>ap(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ap[i] = a[i];
    }
    reverse(a.begin(),a.end());
    if(a == ap)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}