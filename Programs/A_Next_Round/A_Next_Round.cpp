#include<iostream>
using namespace std;
int main()
{
    long long n,k,i,a[100];
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    long long c=0;
    for(i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0)
            c++;
    }
    cout<<c<<"\n";
    return 0;
}
