#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    long long n,k,p,i,f;
    cin>>n>>k;
    p = ceil(static_cast<double>(n)/2);
    if(k>p){
        f=2;
        for(i=p+1;i<k;i++){
            f+=2;
        }
    }
    else{
        f=1;
        for(i=1;i<k;i++){
            f+=2;
        }
    }
    cout<<f<<"\n";
    return 0;
}