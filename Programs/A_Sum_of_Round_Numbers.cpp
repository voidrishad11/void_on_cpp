#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long t,n,c=0,l;
    cin >> t;
    while(t--)
    {
        vector<long long>a;
        string s;
        cin>>s;
        c=0;
        l = s.size();
        num = stoll(s)
        if(num>='1' && num<='9')
        {
            c=1;
            n=1;
            cout<<c<<"\n"<<n<<"\n";
        }
        else if(num%(pow(10,l-1))==0)
        {
            c=1;
            n=1;
            cout<<c<<"\n"<<n<<"\n";
        }
        else
        {
            for (long long i = l,j=0; i >=0; i--,j++)
            {
                long long num = stoll(s[i]);
                a.push_back(num*(pow(10,j)));
            }
            c = a.size();
            cout<<c<<"\n";
            for (long long i = 0; i < c; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
