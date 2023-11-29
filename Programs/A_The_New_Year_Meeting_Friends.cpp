#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long ans;
    vector<long long>a(3);
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ans = (a[1]-a[0])+(a[2]-a[1]);
    cout<<ans<<"\n";

    return 0;
}
