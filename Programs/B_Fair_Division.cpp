#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,i,c,t,one,two;
    cin>>t;
    while(t--)
    {
        cin>>n;
        one = 0;
        two = 0;
        vector<long long>a(n);
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                one++;
            }
            else if(a[i]==2)
            {
                two++;
            }
            if(one%2==0)
            {
                one-=2;
                two++;
            }
        }
        if(one%2==0 && two%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}