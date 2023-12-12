#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    vector<string>s;
    getline(cin,s);
    char  c = \ ;
    for (int i = 0; i < s.size(); i++)
    {
        char t = s[i];
        if ( t != \ )
        {
            cout<<s[i];
        }
    }
    cout<<"\n";
    return 0;
}