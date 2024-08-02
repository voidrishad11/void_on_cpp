#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long long n,i;
    string s = "I hate";
    cin>>n;
    for (i = 2; i <= n; i++)
    {
        if(i%2==0){
            s = s + " that I love";
        }
        else{
            s = s + " that I hate";
        }   
    }
    s = s + " it";
    cout<<s<<"\n";
    return 0;
}