/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 13 August, 2024 | 22:05:37 GMT +6
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
    fast;
    int tc;
    cin >> tc;

    while (tc--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        int sn;
        cin >> sn;
        while (sn--) 
        {
            string s;
            cin >> s;
            if (s.length() != n) 
            {
                cout << "NO\n";
                continue;
            }

            unordered_map<int, char> nc;
            unordered_map<char, int> cn;
            bool flag = true;

            for (int i = 0; i < n; i++) 
            {
                int num = a[i];
                char c = s[i];


                // Check the mapping from number to character
                if (nc.count(num)) 
                {
                    if (nc[num] != c) 
                    {
                        flag = false;
                        break;
                    }
                } 
                else 
                {
                    nc[num] = c;
                }

                // Check the mapping from character to number
                if (cn.count(c)) 
                {
                    if (cn[c] != num) 
                    {
                        flag = false;
                        break;
                    }
                } 
                else 
                {
                    cn[c] = num;
                }
            }

            cout << ( flag ? "YES" : "NO") << nL;
        }
    }

    return 0;
}