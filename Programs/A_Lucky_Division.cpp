/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 06 January, 2024 | 22.11.55
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
    cin>>s;
    ll i,n,c=0,num;
    n = s.length();
    num = stoi(s);
    vll a = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    for (ll i = 0; i < 12; i++)
    {
        if(s == to_string(a[i]))
        {
            c=1;
            // cout<<"DDD\n";
            break;
        }
    }
    if (c != 1)
    {
        for (ll i = 0; i < 12; i++)
        {
            // cout<<num<<"\n";
            if(num%a[i] == 0)
            {
                c=1;
                // cout<<"mmnD\n";
                break;
            }
        }
    }
    if(c == 1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}