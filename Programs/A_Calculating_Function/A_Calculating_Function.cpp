#include<iostream>
using namespace std;
int main ()
{
    long long n,sum=0,i;
    cin>>n;
    if (n%2==0){
        sum = n/2;
    }
    else{
        sum = -(n+2)/2;
    }
    cout<<sum<<"\n";
    return 0;
}
