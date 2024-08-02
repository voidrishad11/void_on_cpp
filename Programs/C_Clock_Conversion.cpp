/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 28 March, 2024 | 21.39.37
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
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
    ll t;
    cin >> t;
    cin.ignore(); // ignore the newline after reading t
    while (t--)
    {
        string times;
        getline(cin, times); // read the whole line including whitespaces

        istringstream iss(times);
        string line;
        
        while (getline(iss, line)) 
        {
            istringstream lineStream(line);
            string hr_str, min_str;
            char colon;
            
            // Extracting hours and minutes from the line
            getline(lineStream, hr_str, ':');
            getline(lineStream, min_str);
            
            // Converting string to int
            int hr = stoi(hr_str);
            int min = stoi(min_str);

            bool flag = false; // false for am

            if (hr >= 12)
            {
                flag = true;
                if (hr > 12) // Correcting the condition
                    hr -= 12;
            }
            if (hr == 0)
            {
                hr = 12;
            }
            
            // Outputting time in AM/PM format
            if (!flag)
            {
                cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << " AM\n";
            }
            else
            {
                cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << " PM\n";
            }
        }   
    }
    return 0;
}
