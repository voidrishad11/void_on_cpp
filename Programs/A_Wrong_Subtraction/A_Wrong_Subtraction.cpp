#include<iostream>
using namespace std;
int main()
{
    long long n,k,i;
    cin>>n>>k;
    for(i=1;i<=k;i++){
        if(n%10!=0)
            n--;
        else
            n/=10;
    }
    cout<<n<<"\n";
    return 0;
}

