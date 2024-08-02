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
        if((a+b)==c)
        {
            cout<<"+\n";
        }
        else if((a-b)==c)
        {
            cout<<"-\n";
        }
    }
    return 0;
}