#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    long long t, cn, m;
    cin >> t;
    while (t--)
    {
        string s;
        cn = 0;
        cin >> m;
        cin.ignore();
        getline(cin, s);

        unordered_map<char, int> charCount;

        for (char c : s) 
        {
            charCount[c]++;
        }

        for (const auto &pair : charCount) 
        {
            if (pair.second >= pair.first - 'A' + 1) 
            {
                cn++;
            }
        }
        cout << cn << "\n";
    }
    return 0;
}
