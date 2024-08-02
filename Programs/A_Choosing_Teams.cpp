#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n,k,temp,j,c=0;
    cin>>n>>k;
    vector<long long>a(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (long long i = 0; i < n; i++)
    {
        if (a[i]<= 5-k){
            c++;
        }
    }
    cout<<c/3  <<"\n";
    return 0;
}
