/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 29 December, 2023 | 21.21.12
------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long count = 0;
        vector < long long > c(3);
        cin >> c[0] >> c[1] >> c[2];
        for (long long i = 0; i < 3; i++)
        {
            if ( c[i] > 0 )
            {
                count ++;
            }
        }
        if( c[0] != 0 &&  c[1] != 0)
        {
            count++;
        }
        if( c[0] != 0 &&  c[2] != 0)
        {
            count++;
        }
        if( c[1] != 0 &&  c[2] != 0)
        {
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}