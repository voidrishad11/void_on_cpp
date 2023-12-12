#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string s,so;
    cin>>s;
    so = s;
    long long l = s.size();
    reverse(s.begin(),s.end());
    if(s==so)
    {
        cout<<stoi(s)<<"\nYES\n";
    }
    else
    {
        cout<<stoi(s)<<"\nNO\n";
    }
    return 0;
}