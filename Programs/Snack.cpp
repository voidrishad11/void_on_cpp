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
    long long a,b;
    double sum = 0.0;
    cin>>a>>b;
    if(a==1)
    {
        sum = sum + 4.00*b;
    }
    else if(a==2)
    {
        sum = sum + (4.50*b);
    }
    else if(a==3)
    {
        sum = sum + 5.00*b;
    }
    else if(a==4)
    {
        sum = sum + 2.00*b;
    }
    else
    {
        sum = sum + 1.50*b;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Total: R$ "<<sum<<"\n";
    return 0;
}