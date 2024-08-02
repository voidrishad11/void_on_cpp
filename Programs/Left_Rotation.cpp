#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n,k,temp,t;
    cin>>n>>k;
    vector<long long>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < k; i++)
    {
        temp = a[0];
        for (int j = 0; j < n-1; j++)
        {
            a[j] = a[j+1];
        }
        a[n-1] = temp; 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}