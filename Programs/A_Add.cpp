#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int add(int x, int y)
{
    int ans = x + y;
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<"\n";
    return 0;
}