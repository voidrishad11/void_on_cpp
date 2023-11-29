#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long n;
    string a,b,c;
    cin>>a;
    cin>>b;
    n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i]==b[i]){
            c = c + '0';
        }
        else{
            c = c + '1';
        }
    }
    cout<<c<<"\n";
    return 0;
}