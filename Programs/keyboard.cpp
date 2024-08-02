/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 28 June, 2024 | 19.53.23
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

int main ()
{
    string ori,fak;
    getline(cin,ori);
    getline(cin,fak);
    set<char>st;
    ll i=0;
    for(ll j=0 ; j<fak.size() ; j++)
    {
        if(ori[i]!=fak[j])
        {
            st.insert(fak[j]);
        }
        else
        {
            i++;
        }
    }
    for(auto it: st)
    {
        cout<<it;
    }
    cout<<nL;
    return 0;
}