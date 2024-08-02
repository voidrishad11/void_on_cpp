#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t,c,te;
    cin>>t;
    while(t--)
    {
        long long n;
        c = 0;
        cin>>n;
        vector<long long>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {
            te = a[i];
            if (te == a[i+1] && te == a[i+2])
            {
                cout<<te<<"\n";
                c++;
                break;
            }
        }
        if(c == 0)
            cout<<"-1\n";
    }
    return 0;
}