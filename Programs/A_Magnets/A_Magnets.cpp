#include<iostream>
using namespace std;
int main()
{
    long long i,n,c=1,a[100000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    long long temp = a[0];
    for(i=1;i<n;i++){
        if(a[i]!=temp){
            c++;
            temp = a[i];
        }
    }
    cout<<c<<"\n";
    return 0;
}

