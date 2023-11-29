#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    long long a,b,c=0;
    cin >>a>>b;
    string code;
    cin>>code;
    for (long long i = 0; i <= a+b; i++)
    {
        int num = code[i] - '0';
        if((code[i]!='-') && (num<=0 && num>=9))
        {
            c++;
            break;
        }
    }
    
    if((code[a]=='-') && c==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}
