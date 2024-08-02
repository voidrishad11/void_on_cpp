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
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
    return 0;
}