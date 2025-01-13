/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Monday | 13 January, 2025 | 05:48:59 GMT +6
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
    string s,ss;
    cin >> s;
    bool flag = false;
    bool flag1 = false;
    for (ll i = 0; i < s.size();)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            // flag = true;
            if (i != 0 && !flag1)
            {
                ss+=" ";
                flag1 = true;
            }        
            i+=3;
        }
        else{
            ss+=s[i];
            i++;
            flag1 = false;
        }
    }
    cout<<ss<<nL;
    return 0;
}
