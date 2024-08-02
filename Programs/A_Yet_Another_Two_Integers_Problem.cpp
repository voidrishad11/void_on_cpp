#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    long long n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        c = 0;
        if (a < b)
        {
            while (a < b)
            {
                a += 10;
                c++;
            }
        }
        else if (a > b)
        {
            while (a > b)
            {
                a -= 10;
                c++;
            }
        }
        cout << c << "\n";   
    }
    return 0;
}
