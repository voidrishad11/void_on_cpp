#include<iostream>
using namespace std;
int main()
{
    long long n,a[100],i,c=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            c++;
    }
    if(c==0)
        cout<<"EASY\n";
    else
        cout<<"HARD\n";
    return 0;
}


