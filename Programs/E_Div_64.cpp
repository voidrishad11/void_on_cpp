#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    long long flag = 0,flag2 = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == '1')
        {
            flag ++;
        }
        if (s[i] == '0' && flag > 0)
        {
            flag2 ++;
            if (flag2 == 6)
            {
                break;
            }
        }
    }
    if (flag2 == 6) 
    {
        cout << "yes\n";
    } 
    else 
    {
        cout << "no\n";
    }
    return 0;
}
