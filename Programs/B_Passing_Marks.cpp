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
    long long t,n,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<long long>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        long long l = a.size();
        for (int i = 0; i <= x-1; i++)
        {
            ans = a[i]-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}