#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void print(int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout<<i;
        if(i!=x)
            cout<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}