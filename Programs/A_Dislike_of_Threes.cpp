#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long i,n,j,s;
    vector<long long>a(1000);
    for (i = 0,j=1; i < 1000; j++)
    {
        if(j%3!=0 && j%10!=3)
        {
            a[i]=j;  
            i++;
        }
    }
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>s;
        cout<<a[s-1]<<"\n";
    }
    return 0;
}