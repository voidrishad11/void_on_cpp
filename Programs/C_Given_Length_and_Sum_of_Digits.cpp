#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> extractDigits(int number) 
{
    vector<int> digits;
    if (number == 0) 
    {
        digits.push_back(0);
    } 
    else 
    {
        while (number != 0) {
            int digit = number % 10;
            digits.push_back(digit);
            number /= 10;
        }
    }
    reverse(digits.begin(), digits.end());

    return digits;
}

int main() 
{
    long long i,base,a,b,limit,c=0;
    cin>>a>>b;
    base = pow(10,(a-1));
    limit = pow(10,(a)) - 1;
    vector<long long>m;
    for(i = base;i<limit;i++)
    {
        vector<int>result = extractDigits(a);
        long long sum = 0;
        for (int digit : result) 
        {
            sum = sum + digit;
        }
        if (sum == b)
        {
            m.push_back(i);
        }
    }
    long long l = m.size();
    if (l > 0) 
    {
        cout << m[0] << " " << m[l - 1] << "\n";
    } 
    else 
    {
        cout << "-1 -1\n"; // Fix: Print "-1 -1" if no numbers satisfying conditions exist
    }
    return 0;
}