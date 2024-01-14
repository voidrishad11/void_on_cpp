/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 29 December, 2023 | 21.05.45
------------------------------------------------------*/

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
    ll n, sit = 0, sta = 0, minutes = 0;
    cin >> n;
    string s;
    cin >> s;

    for (ll i = 0; i < n; i++) 
    {
        if (s[i] == 'x') 
        {
            sit++;
        } 
        else 
        {
            sta++;
        }
    }

    if (sit == n / 2 && sta == n / 2) 
    {
        cout << 0 << "\n";
        cout << s << "\n";
    } 
    else 
    {
        if (sit > sta) 
        {
            for (ll i = 0; (sit != n / 2 && sta != n / 2) && i < n; i++) 
            {
                if (s[i] == 'x') 
                {
                    s[i] = 'X';
                    sta++;
                    sit--;
                    minutes++;
                }
            }
        } 
        else if (sit < sta) 
        {
            for (ll i = 0; (sit != n / 2 && sta != n / 2) && i < n; i++) 
            {
                if (s[i] == 'X') 
                {
                    s[i] = 'x';
                    sta--;
                    sit++;
                    minutes++;
                }
            }
        }
        cout << minutes << "\n";
        cout << s << "\n";
    }

    return 0;
}
