#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,d;
        cin>>n>>k;
        vector<long long>a(n);
        vector<long long>b(n-1);
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for (long long i = 0; i < n-1; i++)
        {   
            b[i] = a[i+1] - a[i] ;
        }
        sort(b.begin(),b.end());
        cout<<b[0]<<"\n";
    }
    return 0;
}
