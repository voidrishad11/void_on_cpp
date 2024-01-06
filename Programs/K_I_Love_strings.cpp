/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 01 January, 2024 | 15.02.04
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
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        ll i,j;
        for (i = 0,j = 0; i < s1.size() && j < s2.size(); i++,j++)
        {
            cout <<s1[i]<<s2[j];
        }

        // Append the remaining characters of s1, if any
        while (i < s1.length()) 
        {
            cout << s1[i];
            i++;
        }

        // Append the remaining characters of s2, if any
        while (j < s2.length()) 
        {
            cout << s2[j];
            j++;
        }
        cout <<"\n";

    }
    return 0;
}