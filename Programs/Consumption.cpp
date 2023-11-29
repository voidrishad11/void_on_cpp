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
    long long a;
    double b,ans;
    cin>>a>>b;
    ans = a/b;
    cout<<fixed<<setprecision(3);
    cout<<ans<<" km/l\n";
    return 0;
}