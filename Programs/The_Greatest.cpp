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
    cin>>a>>b>>c;
    if (a>=b && a>=c)
    {
        cout << a << " eh o maior"<< "\n";
    }
    else if (b>=a && b>=c)
    {
        cout << b << " eh o maior"<< "\n";
    }
    else
    {
        cout << c << " eh o maior"<< "\n";
    }
    return 0;
}