#include<iostream>
using namespace std;
int main()
{
    long long a,b,x,t,ans;
    cin>>a>>b>>x;
    if (a<b){
        t = a;
        a = b;
        b = t;
    }
    if((x*x)>(a*b)){
        ans = 1;
    }
    else if (x!=1){
        ans = (a*x)/b;
    }
    else{
        ans = (a*b)/x;
    }
    cout<<ans<<"\n";
    return 0;
}
