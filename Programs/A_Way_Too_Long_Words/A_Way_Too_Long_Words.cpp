#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long i,n,len;
    string a;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        len = a.length();
        if(len>10){
            cout<<a[0]<<len-2<<a.back()<<"\n";
        }
        else{
            cout<<a<<"\n";
        }
    }
    return 0;
}
