#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    long long n,swap=0,max,min;
    cin >> n;
    vector<int> a(n);
    vector<int> dupli(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        a[i] = dupli[i];
    }
    sort(dupli.begin(),dupli.end());
    min = dupli[0];
    max = dupli[n-1];
    cout<<max<<" "<<min;
    //for high to front
    for (int i = 0; i < n; i++) 
    {
        if(a[i]!=max)
        {
            swap++;
        }
        else
        {
            if(i>(n/2))
            {
                swap++;
            }
        }
    }
    //for least to end
    for (int i = n-1; i > 0; i++) 
    {
        if(a[i]!=min)
        {
            swap++;
        }
    }
    cout << swap << endl;

    return 0;
}
