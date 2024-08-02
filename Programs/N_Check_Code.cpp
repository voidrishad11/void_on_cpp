#include <iostream>
#include <string>

using namespace std;

int main() 
{
    long long a, b, c = 0;
    cin >> a >> b;
    string code;
    cin >> code;
    for (long long i = 0; i < a + b + 1; i++) 
    {
        if (i == a) 
        {
            if (code[i] != '-') 
            {
                c++;
                break;
            }
        } 
        else if (!(code[i] >= '0' && code[i] <= '9')) 
        {
            c++;
            break;
        }
    }

    if (c == 0 && code.size() == a + b + 1) 
    {
        cout << "Yes\n";
    }
    else 
    {
        cout << "No\n";
    }

    return 0;
}
