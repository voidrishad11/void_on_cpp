/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 21 June, 2024 | 18.19.32
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
    long long n,i,w,h,t,sheet = 0,w1,h1,hh,ww;
    cin>>t;
    while(t--)
    {
        cin >> w >> h >> n;
        ll sheet = 1;
        while (w % 2 == 0) 
        {
            w /= 2;
            sheet *= 2;
        }
        while (h % 2 == 0) 
        {
            h /= 2;
            sheet *= 2;
        }
        cout << (sheet >= n ? "YES\n" : "NO\n");
    }
    
    return 0;
}