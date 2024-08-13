/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 13 August, 2024 | 22:11:51 GMT +6
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
        ll n;
        cin >> n;

        vll v(n);
        vll vv(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];

            if (i == 0)
            {
                vv[i] = v[i];
            }
            else
            {
                vv[i] = v[i] + vv[i - 1];
            }
        }

        string s;
        cin >> s;

        ll gg = 0;
        ll i = 0, j = n - 1;

        while (i < j)
        {

            while (i < j and s[i] != 'L') i++;
            while (i < j and s[j] != 'R') j--;
            if (i < j)
            {
                if (i > 0)
                {
                    gg += vv[j] - vv[i - 1];
                }
                else
                {
                    gg += vv[j];
                }
                s[i] = '.';
                s[j] = '.';
                i++;
                j--;
            }
        }

        cout << gg << nL;
    }

    return 0;
}