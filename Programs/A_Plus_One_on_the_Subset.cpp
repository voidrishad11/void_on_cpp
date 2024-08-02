#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long n,t,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        
        cout<<a[n-1]-a[0]<<"\n"; 
    }
    return 0;
}
