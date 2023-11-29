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
    long long n,t,yr,mnth,day;
    cin>>n;
    yr = n/365;
    if(n>=365)
        n = n % 365;
    mnth = n / 30;
    if(n>=30)
        n = n % 30;
    day = n;
    cout<<yr<<" ano(s)\n"<<mnth<<" mes(es)\n"<<day<<" dia(s)\n";
    return 0;
}