#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long n,m,op,mp,mini;
    cin>>n>>m>>op>>mp;
    mini = (n/m)*mp ;
    mini = mini + (n%m)*op;
    cout<<mini<<"\n";
    return 0;
}
