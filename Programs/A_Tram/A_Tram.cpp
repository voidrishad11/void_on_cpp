#include<iostream>
using namespace std;
int main()
{
    long long n,i,a[1000],b[1000],c[1000],high,pas;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    pas = b[0]-a[0];
    high = b[0];
    for(i=0;i<n-1;i++){
        pas = pas-a[i+1]+b[i+1];
        if (pas > high)
            high = pas;
    }
    cout<<high<<"\n";
    return 0;
}

