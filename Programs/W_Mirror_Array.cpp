#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    long long a[m][n];
    long long b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int y = n-j-1;
            b[i][j] = a[i][y];
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}