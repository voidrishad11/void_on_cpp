#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long r,c,n,t,flag=0;
    cin>>r>>c;
    char a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
            {
                flag++;
            }
        }
    }
    if(flag==0)
    {
        cout<<"#Black&White\n";
    }
    else
    {
        cout<<"#Color\n";
    }
    return 0;
}