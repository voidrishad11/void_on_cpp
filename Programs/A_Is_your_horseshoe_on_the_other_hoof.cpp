#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n;
    vector<int>a(4);
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    auto it = unique(a.begin(),a.end());
    a.erase(it,a.end());
    n = a.size();
    cout<<4-n<<"\n";
    return 0;
}