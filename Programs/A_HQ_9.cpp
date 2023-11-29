#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n;
    bool count=false;
    string s;
    char c;
    cin>>s;
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        c = s[i];
        if(c =='H' ||c =='Q' ||c=='9'){
            count = true;
        }
    }
    if (count == true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}