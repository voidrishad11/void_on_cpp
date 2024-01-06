#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

int main()
{
    ll n, score = 0;
    cin >> n;
    string s;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'V')
        {
            score += 5;
        }
        else if (s[i] == 'W')
        {
            score += 2;
        }
        else if (s[i] == 'X')
        {
            // Handle 'X' by erasing the next character
            if (i + 1 < n)
            {
                s.erase(i + 1, 1);
                n--; // Adjust the length of the string
            }
        }
        else if (s[i] == 'Y')
        {
            // Handle 'Y' by moving the next character to the end
            if (i + 1 < n)
            {
                char temp = s[i + 1];
                s.erase(i + 1, 1);
                s.push_back(temp);
            }
        }
        else if (s[i] == 'Z')
        {
            // Handle 'Z' by dividing the score and erasing the next character
            if (i + 1 < n)
            {
                if (s[i + 1] == 'V')
                {
                    score /= 5;
                }
                else if (s[i + 1] == 'W')
                {
                    score /= 2;
                }

                s.erase(i + 1, 1);
                n--; // Adjust the length of the string
            }
        }
    }

    cout << score << "\n";

    return 0;
}
