#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() 
{
    long long a,b,c;
    vector<long long>s(3);
    vector<long long>so(3);
    cin>>a>>b>>c;
    s[0]=a;
    s[1]=b;
    s[2]=c;
    so = s;
    sort(s.begin(),s.end());
    for (int i = 0; i < 3; i++)
    {
        cout<<s[i]<<"\n";
    }
     cout<<"\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<so[i]<<"\n";
    }
    return 0;
}