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
    string a,ap;
    cin>>a;
    ap = a;
    reverse(a.begin(),a.end());
    if(a == ap)
        cout<<"true\n";
    else
        cout<<"false\n";
    return 0;
}