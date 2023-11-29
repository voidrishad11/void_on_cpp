#include<iostream>
using namespace std;
int main()
{
    long long n,p[100],q[100],i,c=0,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p[i]>>q[i];
        temp = q[i]-p[i];
        if(temp >= 2)
            c++;
    }
    cout<<c<<"\n";
    return 0;
}

