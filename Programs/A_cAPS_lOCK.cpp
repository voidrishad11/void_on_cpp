#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int flag = 0,caps = 0;
    string s,so;
    cin>>s;
    so=s;
    long long l = s.length();
    char c = s[0];
    int ascii = (int)c;
    if(ascii>=97)
    {
        c = toupper(c);
        s[0] = c;
    }
    else
    {
        caps++;
    }
    for (long long i = 1; i < l; i++)
    {
        c = s[i];
        int ascii = (int)c;
        if(ascii>=97)
        {
            cout<<so;
            flag++;
            break;
        }
        else
        {
            c = tolower(c);
            s[i] = c;
            caps++;
        }
    }
    if(flag==0 && caps != l)
    {
        cout<<s;
    }
    else if (caps == l)
    {
        c = s[0];
        c = tolower(c);
        s[0] = c;
        cout<<s;
    }
    return 0;
}