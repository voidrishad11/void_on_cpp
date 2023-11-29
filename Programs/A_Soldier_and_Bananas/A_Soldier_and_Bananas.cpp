#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long i,p,h,w,t,total=0,borrow;
    cin>>p>>h>>w;
    for(i=1;i<=w;i++){
        t = p*i;
        total = total + t;
    }
    if (total < h)
        cout<<"0\n";
    else{
        borrow = total - h;
        cout<<borrow<<"\n";
    }
    return 0;
}

