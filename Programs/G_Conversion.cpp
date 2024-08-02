#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = tolower(s[i]);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s<<"\n";
    return 0;
}