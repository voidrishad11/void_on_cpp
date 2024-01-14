/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 07 January, 2024 | 15.28.23
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
    bool flag = true;
    ll c = 0,p;
    cin>>s;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
        {
            p = i;
            c = 1;
            break;
        }
    }
    for (ll j = p+1; j < s.length(); j++)
    {
        if (c == 1)
        {
            if (s[j] == 'h' || s[j] == 'e')
            {
                c = 2;
            }
            else
            {
                flag = false;
                break;
            } 
        }
        else if (c == 2)
        {
            if (s[j] == 'e' || s[j] == 'l')
            {
                c = 3;
            }
            else
            {
                flag = false;
                break;
            } 
        }
        else if (c == 3)
        {
            if (s[j] == 'l' || s[j] == 'o')
            {
                c = 4;
            }
            else
            {
                flag = false;
                break;
            } 
        }
        else if (c == 4)
        {
            if (s[j] == 'l')
            {
                c = 5;
            }
            else
            {
                flag = false;
                break;
            } 
        }
        else
        {  
            flag = true;
        }
    }
    cout<<c<<"\n";
    if (c == 5)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}