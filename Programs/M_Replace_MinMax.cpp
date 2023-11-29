#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long n,min,max,l,h;
    cin>>n;
    vector<long long>a(n);
    vector<long long>ao(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ao[i] = a[i];
    }
    sort(ao.begin(),ao.end());
    min = ao[0];
    max = ao[n-1];
    for (int i = 0; i < n; i++)
    {
        if(a[i]==min)
        {
            l = i;
        }
        if(a[i]==max)
        {
            h = i;
        }
    }
    long long temp = a[l];
    a[l] = a[h];
    a[h] = temp;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
