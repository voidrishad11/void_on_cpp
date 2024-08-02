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
    long long n, flag = 0,i,c=0,ans=0;
    cin>>n;
    vector<long long>a(n);
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {
        for (c = 0; flag !=1 ; c++)
        {
            for (i = 0; i < n; i++)
            {
                if(a[i]%2==0)
                {
                    a[i] = a[i]/2;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }   
        cout<<c-1<<"\n";
    }
    else
    {
        cout<<c<<"\n";
    }
    return 0;
}