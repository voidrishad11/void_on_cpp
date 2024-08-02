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
    double x1,x2,y1,y2,ans;
    cin>>x1>>y1;
    cin>>x2>>y2;
    ans = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<fixed<<setprecision(4);
    cout<<ans<<"\n";
    return 0;
}