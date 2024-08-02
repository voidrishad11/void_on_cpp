#include<iostream>
using namespace std;
int main()
{
    string s;
    long long i,n,a=0,d=0;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]== 'A')
            a++;
        if(s[i]== 'D')
            d++;
    }
    if(a>d)
        cout<<"Anton\n";
    else if (d>a)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    return 0;
}