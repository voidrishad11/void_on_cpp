/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 17 May, 2025 | 23:33:57 GMT +6
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
    ll n,m;
    cin >> n >> m;
    vector<pair<string, string>> texts;
    for (ll i = 0; i < m; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        // cout << str1 <<"3434" <<str2<< nL;
        texts.pb(make_pair(str1, str2));
    }
    vs note;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        note.pb(s);
    }
    for (ll i = 0; i < n; i++) 
    {
        string current = note[i];

        for (ll j = 0; j < m; j++) 
        {
            if (texts[j].first == current || texts[j].second == current) 
            {
                // Print the shorter of the two
                if (texts[j].first.length() <= texts[j].second.length()) 
                {
                    cout << texts[j].first << " ";
                } 
                else 
                {
                    cout << texts[j].second << " ";
                }
                break; // Stop searching once matched
            }
        }
    }
    return 0;
}
