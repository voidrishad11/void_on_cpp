#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long k,l,m,n,d,size,i,c=0;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    if (k == 1){
        cout<<d<<"\n";
    }
    else{
        for (i=0; i < d; i++)
        {
            if((i+1)%k != 0 && (i+1)%l != 0 && (i+1)%m != 0 && (i+1)%n != 0){
                c++;
            }
        }
        cout<<d-c<<"\n";
    }
    return 0;
}