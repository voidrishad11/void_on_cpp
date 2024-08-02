/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 27 December, 2023 | 22.49.25
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
    string s;
    ll e=0,g=0,y=0,p=0,t=0;
    cin>>s;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i] == 'E' || s[i] == 'e')
        {
            e++;
        }
        else if(s[i] == 'G' || s[i] == 'g')
        {
            g++;
        }
        else if(s[i] == 'Y' || s[i] == 'y')
        {
            y++;
        }
        else if(s[i] == 'P' || s[i] == 'p')
        {
            p++;
        }
        else if(s[i] == 'T' || s[i] == 't')
        {
            t++;
        }
    }
    cout<<min(min(min(min(t,p),y),g),e)<<"\n";
    return 0;
}