#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
    string a,b;
    long long a_l,x,y,flag1,flag2;
    cin>>a>>b;
    a_l = a.length();
    flag1 = 0;
    flag2 = 0;
    for (int i=0;i<a_l;i++){
        x = tolower(a[i]);
        y = tolower(b[i]);
        if( x==y || x+32 == y ||x == y+32){
            continue;
        }
        else if(x>y){
            flag1++;
            break;
        }
        else{
            flag2++;
            break;
        }
    }
    if(flag1>flag2)
        cout<<"1";
    else if (flag1 == 0 && flag2 == 0)
        cout<<"0";
    else
        cout<<"-1";
    return 0;
}
