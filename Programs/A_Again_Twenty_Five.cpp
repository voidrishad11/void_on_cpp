#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long p,ans=1;
    cin>>p;
    if (p==0)
    {
        cout<<"1\n";
    }
    else if (p==1)
    {
        cout<<"5\n";
    }
    else
    {
        cout<<"25\n";
    }
    return 0;
}
