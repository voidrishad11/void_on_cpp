#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long i,n,c=0,num;
    n = s.length();
    num = stoi(s);
    for(i=0;i<n;i++){
        if(s[i]!= '4' && s[i]!= '7'){
            c++;
            break;
        }
    }
    if(num%4==0 || num%7==0){
        c=0;
    }
    if(c == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

