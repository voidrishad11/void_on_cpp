/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Monday | 12 May, 2025 | 19:08:39 GMT +6
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
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define nL "\n"
#define pb push_back
#define mk make_pair
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    fast;
    ll n;
    cin >> n;
    ll voidDays = 0;
    ll Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
    cin >> Monday >> Tuesday >> Wednesday >> Thursday >> Friday >> Saturday >> Sunday;
    
    
    
    while (n > 0) 
    {
        if ((n -= Monday) <= 0) {
            cout << "1" << nL;
            break;
        }
        else if ((n -= Tuesday) <= 0) {
            cout << "2" << nL;
            break;
        }
        else if ((n -= Wednesday) <= 0) {
            cout << "3" << nL;
            break;
        }
        else if ((n -= Thursday) <= 0) {
            cout << "4" << nL;
            break;
        }
        else if ((n -= Friday) <= 0) {
            cout << "5" << nL;
            break;
        }
        else if ((n -= Saturday) <= 0) {
            cout << "6" << nL;
            break;
        }
        else if ((n -= Sunday) <= 0) {
            cout << "7" << nL;
            break;
        }
    }
    return 0;
}
