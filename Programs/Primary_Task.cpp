/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 13 August, 2024 | 21:08:52 GMT +6
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

int main() 
{
    int tc;
    cin >> tc;
    while (tc--) 
    {
        string s;
        cin >> s;

        if (s.length() >= 3  && s[0] == '1' && s[1] == '0' && s[2]!='0') 
        {

            int remaining_number = stoi(s.substr(2));
            if (remaining_number == 1) 
            {
                cout << "NO\n";
            } 
            else 
            {
                cout << "YES\n";
            }
        } 
        else 
        {
            cout << "NO\n";
        }
    }
    return 0;
}