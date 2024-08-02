/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 24 January, 2024 | 17.35.00
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
    ll t;
    cin >> t;
    while (t--)
    {
        
        string s1,s2;
        cin >> s1 >> s2;
        ll r = s1.size();
        ll t = s2.size();
        ll sum1 = 0;
        ll sum2 = 0;
        // for (ll i = 0; i < r; i++)
        // {
        //     char c = s1[i];
        //     ll in = ( c -'0');
        //     sum1 += in;
        // }
        // for (ll i = 0; i < t; i++)
        // {
        //     char c = s2[i];
        //     ll in = ( c - '0');
        //     sum2 += in;
        // }
        // if (sum1 > sum2)
        // {
        //     cout<<"<\n";
        // }
        // else if (sum1 < sum2)
        // {
        //     cout<<">\n";
        // }
        // else
        // {
        //     cout<<"=\n";
        // }
        if (r == t)// lms
        {
            if (s1[r-1] > s1[t-1])
            {
                cout<<"<\n";
            }
            else if (s1[r-1] < s1[t-1])
            {
                cout<<">\n";
            }
            else
            {
                cout<<"=\n";
            }
        }
        else if (r>t)
        {
            if(s1[r-1] == s1[t-1])
            {
                cout<<">\n";
            }
            else if (s1[r-1] > s1[t-1])//XXXM XL
            {
                cout<<">\n";
            }
            else
            {
                cout<<"<\n";
            }
        }
        else
        {
            if(s1[r-1] == s1[t-1])
            {
                cout<<"<\n";
            }
            else if (s1[r-1] > s1[t-1])//XXXM XL
            {
                cout<<">\n";
            }
            else
            {
                cout<<"<\n";
            }
        }
    }
    return 0;
}