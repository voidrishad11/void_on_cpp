#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long long n,i,a,b,c,s1,s2,s3,s4;
    cin>>a>>b>>c;
    s1 = a*b*c;
    s2 = (a+b)*c;
    s3 = a*(b+c);
    s4 = a+b+c;
    if (s1>=s2 && s1>=s3 && s1>=s4)
        cout<<s1<<"\n";
    else if (s2>=s1 && s2>=s3 && s2>=s4)
        cout<<s2<<"\n";
    else if (s3>=s1 && s3>=s2 && s3>=s4)
        cout<<s3<<"\n";
    else
        cout<<s4<<"\n";
    return 0;
} 