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
    long long n,low;
    cin>>n;
    vector<long long>a(n);
    vector<long long>ao(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ao = a;
    sort(a.begin(),a.end());
    low = a[0];
    for (int i = 0; i < n; i++)
    {
        if( ao[i] == low )
        {
            cout<<low<<" "<<i+1<<"\n";
            break;
        }
    }
    return 0;
}