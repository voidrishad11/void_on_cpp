#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long a,b,f,flag=0;
    cin>>a>>b;
    long long g[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>g[i][j];
        }
    }
    cin>>f;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(g[i][j]==f)
            {
                flag ++;
                break;
            }
        }
    }
    if(flag == 0)
        cout<<"will take number\n";
    else
        cout<<"will not take number\n";
    return 0;
}