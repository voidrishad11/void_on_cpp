#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s, o;
    cin >> s;
    long long len = s.length();
    for (int i = 0; i < len; )
    {
        if (s[i] == '.') {
            o += '0';
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.') {
            o += '1';
            i += 2;
        }
        else if (s[i] == '-' && s[i + 1] == '-') {
            o += '2';
            i += 2;
        }
    }
    cout << o << "\n";
    return 0;
}
