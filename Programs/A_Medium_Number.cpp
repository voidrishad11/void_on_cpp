#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,i,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a<b && a>c) || (a>b && a<c))
        {
            cout<<a<<"\n";
        }
        else if((b<a && b>c) || (b>a && b<c))
        {
            cout<<b<<"\n";
        }
        else if((c<a && c>b) || (c>a && c<b))
        {
            cout<<c<<"\n";
        }
    }
    return 0;
}