#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0 || j==0)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
    }
    
    cout<<a[n-1][n-1]<<"\n";
    return 0;
}