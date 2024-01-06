#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n,k,ans;
    cin>>n>>k;
    ans = n - (k % n);
    cout<<ans<<"\n";
    return 0;
}