#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a=0,b=0;
        cin>>n>>k;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='B')
            {
                b++;
            }
        }
        if(b==k)
        {
            cout<<0<<endl;
        }
        else if(b<k)
        {
            cout<<1<<endl;
            for(int i=0;i<str.size();i++)
            {
                if(str[i]=='A')
                {
                    b++;
                }
                if(b==k)
                {
                    cout<<i+1<<" "<<"B\n";
                    break;
                }
            }
        }
        else
        {
            cout<<1<<"\n";
            for(int i=0;i<str.size();i++)
            {
                if(str[i]=='B')
                {
                    b--;
                }
                if(b==k)
                {
                    cout<<i+1<<" "<<"A\n";
                    break;
                }
            }
        }
    }
    return 0;
}