#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.length();
        if(s[l-1] == 'x' || s[l-1] == 's' || s[l-1] == 'o' || ( s[l-2] == 'c' && s[l-1] == 'h' ))
        {
            s+="es";
            cout<<s<<"\n";
        }
        else if(s[l-1] == 'f')
        {
            s[l-1] = 'v';
            s+= "es";
            cout<<s<<"\n";
        }
        else if((s[l-2] == 'f' && s[l-1] == 'e' ))
        {
            s[l-2] = 'v';
            s[l-1] = 'e';
            s+='s';
            cout<<s<<"\n";
        }
        else if(s[l-1] == 'y' )
        {
            s[l-1] = 'i';
            s+="es";
            cout<<s<<"\n";
        }
        else
        {
            s+='s';
            cout<<s<<"\n";
        }
    }
    return 0;
}