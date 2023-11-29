#include<iostream>
using namespace std;
int main()
{
    long long n,p[100],q[100],r[100],i,c=0,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p[i]>>q[i]>>r[i];
    }
    for(i=0;i<n;i++){
        sum1 = sum1 + p[i];
        sum2 = sum2 + q[i];
        sum2 = sum2 + r[i];
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}


