/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Sunday | 01 September, 2024 | 20:57:38 GMT +6
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
    ll tc;
    cin >> tc;
    while(tc--) 
    {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        ll root = sqrt(n);
        if (root * root != n) 
        {
            cout << "No" << nL;
            continue;
        }
        
        int r = sqrt(n);
        bool flag = true;
        
        for (ll i = 0; i < r; i++) 
        {
            if (s[i] != '1' || s[n - r + i] != '1') 
            {
                flag = false;
                break;
            }
        }
        
        for (ll i = 0; i < r; i++) 
        {
            if (s[i * r] != '1' || s[(i + 1) * r - 1] != '1') 
            {
                flag = false;
                break;
            }
        }
        
        for (ll i = 1; i < r - 1 && flag; i++) 
        {
            for (ll j = 1; j < r - 1; j++) 
            {
                if (s[i * r + j] != '0') 
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) 
        {
            cout << "Yes" << nL;
        } 
        else 
        {
            cout << "No" << nL;
        }
    }
    return 0;
}