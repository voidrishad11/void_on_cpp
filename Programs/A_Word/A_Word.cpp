#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s;
    long long i,c1=0,c2=0;
    cin>>s;
    long long n = s.length();
    for(i=0;i<n;i++){
        if ((int)s[i]<=122 && (int)s[i]>=97){//For lower
            c1++;
        }
        else if ((int)s[i]<=90 && (int)s[i]>=65){//For upper
            c2++;
        }
    }
    if (c1<c2){
        for(i=0;i<n;i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(i=0;i<n;i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<"\n";
    return 0;
}

