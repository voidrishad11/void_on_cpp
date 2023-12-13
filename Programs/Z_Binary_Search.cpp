#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n,k,c;
    cin>>n>>k;
    vector<long long>a(n);
    vector<long long>b(k);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < k; j++)
    {
        cin>>b[j];
        c=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[j])
            {
                cout<<"found\n";
                c++;
                break;
            }
        }
        if (c==0)
        {
            cout<<"not found\n";
        }
    }
    return 0;
}