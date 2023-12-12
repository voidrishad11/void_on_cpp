#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    long long n,k,t,c,i,j;
    cin >> t;
    while (t--) 
    {
        cin>>n;
        vector<long long>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        reverse(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<"\n";
        }
    }
    return 0;
}
