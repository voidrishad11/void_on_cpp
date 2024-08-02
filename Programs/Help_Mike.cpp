#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    long long n,k,t,c,i,j;
    cin >> t;
    while (t--) 
    {
        cin >> n >> k;
        c = 0;
        for (i = 1; i < n; i++) 
        {
            for (j = i + 1; j <= n; j++) 
            {
                if ((i + j) % k == 0) 
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
