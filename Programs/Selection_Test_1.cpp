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
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>c && d>a && (c+d)>(a+b) && c>=0 && d>=0 && a%2==0)
    {
        cout<<"Valores aceitos\n";
    }
    else
    {
        cout<<"Valores nao aceitos\n";
    }
    return 0;
}