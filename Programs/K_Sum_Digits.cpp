#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    long long n,sum = 0;
    cin >>n;
    string code;
    cin>>code;
    for (long long i = 0; i < n; i++)
    {
        int num = code[i] - '0';
        sum = sum + num;
    }
    cout<<sum<<"\n";
    return 0;
}
