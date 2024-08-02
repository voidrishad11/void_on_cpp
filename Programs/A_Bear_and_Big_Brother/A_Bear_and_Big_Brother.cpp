#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long a,b,i;
    cin>>a>>b;
    for(i=1;a<=b;i++){
        a = a*3;
        b = b*2;
    }
    cout<<i-1<<"\n";
    return 0;
}
