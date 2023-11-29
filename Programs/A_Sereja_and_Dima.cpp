#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool descendingSort(long long a, long long b) {
    return a >= b; // Compare in descending order
}
int main()
{
    long long n,sereja=0,dina=0;
    cin>>n;
    vector<long long>a(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),descendingSort);
    for (long long i = 0; i < n; i++)
    {
        if (((i+1)%2)!=0)
        {
            sereja = sereja + a[i];
        }
        else
        {
            dina = dina + a[i];
        }
    }
    cout<<sereja<<" "<<dina<<"\n";
    return 0;
}