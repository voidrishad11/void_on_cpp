#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t,c;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==b)
            cout<<"Square\n";
        else
            cout<<"Rectangle\n";
    }
    return 0;
}