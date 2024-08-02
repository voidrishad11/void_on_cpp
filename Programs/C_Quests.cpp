#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t,sum,temp,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        sum = 0 ;
        vector<long long>a(n);
        vector<long long>b(n);
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sum = sum + a[0];
        temp = b[0];
        long long f = 2;
        for (long long i = 1;f <= k;f++)
        {
            if ((a[i] >= temp) && (a[i] >= b[i-1]) && (i < n))
            {
                sum = sum + a[i];
                temp = max(temp,b[i]);
                i++;
            }
            else
            {
                sum = sum + temp;
            } 
        }
        cout<<sum<<"\n";
    }
    return 0;
}