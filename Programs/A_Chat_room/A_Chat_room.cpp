#include<iostream>
using namespace std;
int main ()
{
    long long i,n,j,c=0,f=0;
    string s,h;
    cin>>s;
    n = s.length();
    h = "hello";
    for(i=0;i<n;i++){
        for(j=f;j<n;){
            if (h[i] == s[j]){
                c++;
                f=j;
                break;
            }
            else{
                j++;
                f=j;
            }
        }
    }
    cout<<c<<"\n";
    if(c==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

