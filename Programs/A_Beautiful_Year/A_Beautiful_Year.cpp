#include<iostream>
using namespace std;
int main ()
{
    long long s,a,b,c,d;
    cin>>s;
    for(int i = s+1;i<=9999;){
        a = i%10;
        b = (i/10)%10;
        c = (i/100)%10;
        d = i/1000;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<i<<"\n";
            break;
        }
        else
            i++;
    }
    return 0;
}
