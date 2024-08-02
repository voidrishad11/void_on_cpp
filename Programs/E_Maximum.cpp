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
    long long t;
    cin>>t;
    vector<long long>a(t);
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long l = a.size();
    cout<<a[l-1]<<"\n";
    return 0;
}