#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n,sum,a,b,c;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
