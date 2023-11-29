#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,i,w,h,t,sheet,flag=0;
    cin>>t;
    while(t--)
    {
        sheet = 1;
        cin>>w>>h>>n;
        while(1)
        {
            if(w%2==0)
            {
                w/=2;
                sheet++;
            }
            else if(h%2==0)
            {
                h/=2;
                sheet++;
            }
            if(sheet>=n)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    
    return 0;
}