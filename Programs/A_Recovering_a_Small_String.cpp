/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 13 February, 2024 | 20.39.26
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
    while (t--)
    {
        ll nn;
        cin >> nn;
        string m,n,o;
        string s = "abcdefghijklmnopqrstuvwxyz";
        if (nn<=28)
        {
            m = 'a';
            n = 'a';
            o = s[nn-3];
        }
        else
        {
            o = 'z';
            nn -= 26;
            if (nn<=26)
            {
                m = 'a';
                n = s[nn-2];
            }
            else
            {
                n = 'z';
                nn-=26;
                m = s[nn-1];
            }
        }
        cout<<m<<n<<o<<"\n";  
    }
    return 0;
}
