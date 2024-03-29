/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 09 January, 2024 | 21.42.48
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
    ll r,d,x,y,rr;
    cin >>r>>d;
    ll n;
    cin >> n;
    ll cnt = 0;
    while (n--) 
    {
        cin >> x >> y >> rr;
        
        //for 1st quad
        if ( x <= r || y <= r || x >= (r-d) || y >= (r-d))
        {
            cnt ++;
        }
        //for 2nd quad
        else if ( x <= (-1) * r || y <= r || x >= (-1) * (r-d) || y >= (r-d))
        {
            cnt ++;
        }
        //for 3rd quad
        else if ( x <= (-1) *r || y <= (-1) *r || x >= (-1) *(r-d) || y >= (-1) * (r-d))
        {
            cnt ++;
        }
        //for 4th quad
        else if ( x <= r || y <= (-1) *r || x >= (r-d) || y >= (-1) *(r-d))
        {
            cnt ++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
