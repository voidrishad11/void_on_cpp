#include<iostream>
using namespace std;
int main()
{
    long long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)<<"\n";
        }
        else if (n == 1)
        {
            cout<<"1\n";
        }
        
        else
        {
            cout<<((n/2)+1)<<"\n";
        }
  }
  return 0;
}