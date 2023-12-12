#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <bitset>
using namespace std;

int swap (int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<"\n";
    return 0;
}

int main() 
{
    int x,y;
    cin>>x>>y;
    swap(x,y);
    return 0;
}
