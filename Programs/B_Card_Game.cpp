/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Monday | 12 August, 2024 | 01:34:18 GMT +6
---------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define mii map<int, int>
#define si set<int>
#define a first
#define b second
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define nL "\n"
#define pb push_back
#define mk make_pair
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    fast;
    ll tc;
    cin >> tc;
    while(tc--) 
    {
        ll a1,a2,b1,b2,a;
        cin >> a1 >> a2 >> b1 >> b2;
        a = 0;
        if (a1 > b1)
        {
            if (a2 >= b2)
            {
                a++;
            }
            else
            {
                a = a;
            }
        }
        else if (a1 == b1)
        {
            if (a2 > b2)
            {
                a++;
            }
            else
            {
                a = a;
            }
        }
        if (a1 > b2)
        {
            if (a2 >= b1)
            {
                a++;
            }
            else
            {
                a = a;
            }
        }
        else if (a1 == b2)
        {
            if (a2 > b1)
            {
                a++;
            }
            else
            {
                a = a;
            }
        }
        cout << a*2 << nL;
    }
    return 0;
}