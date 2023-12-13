#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    string inp;
    while(t--)
    {
        cin>>inp;
        string a ,b;
        long long l = inp.size();
        int i = 0;
        while (inp[i] != '+') 
        {
            a += inp[i];
            i++;
        }
        i++;
        while (i < l) 
        {
            b += inp[i];
            i++;
        }
        long long m,n;
        m = stoll(a);
        n = stoll(b);
        cout<<m+n<<"\n";
    }
    return 0;
}