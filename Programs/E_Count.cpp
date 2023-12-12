#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long num,ans=0;
    for (int i = 0; i < s.size(); i++)
    {
        char t = s[i];
        num = t - '0';
        ans = ans + num;
    }
    cout<<ans<<"\n";
    return 0;
}