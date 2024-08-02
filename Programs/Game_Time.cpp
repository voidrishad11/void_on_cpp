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
    long long a,b,sum;
    cin>>a>>b;
    if(a>b)
    {
        sum = (24-a)+b;
    }
    else if (a==0 && b ==0)
    {
        sum = 24;
    }
    else
    {
        sum = b-a;
    }
    cout<<"O JOGO DUROU "<<sum<<" HORA(S)\n";
    return 0;
}