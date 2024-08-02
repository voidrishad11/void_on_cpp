#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long i,n,c=0;
    n = s.length();
    for(i=0;i<n;i++){
        if(s[i]== '0'){
            c++;
            if (c==7)
                break;
        }
        else{
            c=0;
        }
    }
    if(c!=7){
        c=0;
        for(i=0;i<n;i++){
        if(s[i]== '1'){
            c++;
            if (c==7)
                break;
        }
        else{
            c=0;
        }
    }
    }
    if(c == 7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
