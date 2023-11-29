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
    double ans;
    cin>>a;
    cin>>b;
    ans = (a*b)/12.0;
    cout<< fixed <<setprecision(3);
    cout<<ans<<"\n";
    return 0;
}