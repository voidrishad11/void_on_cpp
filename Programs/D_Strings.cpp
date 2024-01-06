#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n"<<a+b<<"\n";
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b<<"\n";
    return 0;
}