#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
int main()
{
    long long n,c=0,i;
    char c1,ch;
    cin>>n;
    vector<char>s(n);
    set<char> uniqueChars;
    for (i = 0; i < n; i++)
    {
        cin>>ch;
        s[i] = tolower(ch);
        uniqueChars.insert(s[i]);
    }
    for (int i = 0, c1 = 'a'; i < 26; i++, c1++) {
        if (uniqueChars.find(c1) == uniqueChars.end()) {
            cout << "NO\n";
            c++;
            break;
        }
    }
    if(c == 0)
    {
        cout<<"YES\n";
    }
    return 0;
}
