#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <bitset>
#include <iomanip>
using namespace std;

double average (double f,int num)
{
    double avg = f / num;
    return avg;
}

int main() 
{
    int n;
    double sum = 0.0;
    cin>>n;
    vector<double>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    cout<<setprecision(6)<<average(sum,n)<<"\n";
    return 0;
}