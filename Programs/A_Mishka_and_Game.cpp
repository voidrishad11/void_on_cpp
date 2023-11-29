#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    long long n,sum1=0,sum2=0;
    cin >> n;
    vector<long long>m(n);
    vector<long long>c(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>m[i]>>c[i];
        if (m[i]>c[i])
        {
            sum1++;
        }
        else if (m[i]<c[i])
        {
            sum2++;
        }
        else
        {
            sum1++;
            sum2++;
        }
    }
    if (sum1>sum2)
    {
        cout<<"Mishka\n";
    }
    else if (sum1<sum2)
    {
        cout<<"Chris\n";
    }
    else
    {
        cout<<"Friendship is magic!^^\n";
    }
    return 0;
}
