#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,rating;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>rating;
        if(1900<rating || 1900==rating)
        {
            cout<<"Division 1\n";
        }
        else if(1600<rating || 1600==rating )
        {
            cout<<"Division 2\n";
        }
        else if(1400<rating || 1400==rating)
        {
            cout<<"Division 3\n";
        }
        else
        {
            cout<<"Division 4\n";
        }
    }
    return 0;
}