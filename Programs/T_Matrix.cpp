#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n,pri=0,sec=0;
    cin>>n;
    long long a[n][n];
    long long b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                pri += a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int y = n-j-1;
            b[i][j] = a[i][y];
            if(i==j)
            {
                sec += b[i][j];
            }
        }
    }
    cout<<abs(pri-sec)<<"\n";
    // cout<<sec<<"\n";
    return 0;
}