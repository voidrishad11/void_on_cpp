#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long n,i,c=0,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(i=1;i<=n;i++){
        if(i%2!=0)
            a[i-1] = i;
        else
            a[i-1] = i;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<a[k-1]<<"\n";
    return 0;
}