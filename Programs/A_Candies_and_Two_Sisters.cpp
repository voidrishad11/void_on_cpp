#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n,c=0,d,left,m;
    cin>>m;
    for ( long long i = 1; i <= m; i++)
    {
        cin>>n;
        if (n%2 == 0){
        c =(n/2)-1;
        }
        else{
            c =(n/2);
        }
        cout<<c<<"\n";
    }
    return 0;
}