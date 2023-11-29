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
    long long n,t,hr,mi,sec;
    cin>>n;
    hr = n/3600;
    if(n>=3600)
        n = n % 3600;
    mi = n / 60;
    if(n>=60)
        n = n % 60;
    sec = n;
    cout<<hr<<":"<<mi<<":"<<sec<<"\n";
    return 0;
}