#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    for (const auto &pair : charCount) 
    {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}
