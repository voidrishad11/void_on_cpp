// Make the first character an uppercase
// Replace all s with $
// Replace all i with !
// Replace all o with ()
// Append a . (period) at the end of the password
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() 
{
    string s,final;
    cin>>s;
    final += toupper(s[0]);
    long long n = s.size();
    for (int i = 1; i < n; i++)
    {
        if(s[i]=='s')
        {
            final += '$';
        }
        else if(s[i]=='i')
        {
            final += '!';
        }
        else if(s[i]== 'o')
        {
            final += '(' ;
            final += ')' ;
        }
        else
        {
            final += s[i];
        }
    }
    cout<<final+'.'<<"\n";
    return 0;
}