#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long i,n,c=0;
    n = s.length();
    for(i=0;i<n;i++){
        if(s[i]== '4' || s[i]== '7')
            c++;
    }
    if(c == 4 || c== 7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
