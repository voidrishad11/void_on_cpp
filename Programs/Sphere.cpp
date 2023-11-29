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
    long long r;
    double v;
    cin>>r;
    v = (4/3.0)*PI*pow(r,3);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << v << "\n";
    return 0;
}