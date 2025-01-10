/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Friday | 08 November, 2024 | 18:01:01 GMT +6
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


int main()
{
    int T;
    cin >> T;
    set<vector<int>> combination;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                int A = 0, B = 0, C = 0;
                if (i == 0)
                    A += 3;
                else if (i == 1)
                    B += 3;
                else
                {
                    A += 1;
                    B += 1;
                }

                if (j == 0)
                    A += 3;
                else if (j == 1)
                    C += 3;
                else
                {
                    A += 1;
                    C += 1;
                }

                if (k == 0)
                    B += 3;
                else if (k == 1)
                    C += 3;
                else
                {
                    B += 1;
                    C += 1;
                }

                vector<int> p = {A, B, C};
                sort(p.begin(), p.end());
                combination.insert(p);
            }
        }
    }
    for (int t = 1; t <= T; t++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        vector<int> v = {A, B, C};
        sort(v.begin(), v.end());
        if (combination.count(v))
        {
            cout << "Case " << t << ": perfectus" << endl;
        }
        else
        {
            cout << "Case " << t << ": invalidum" << endl;
        }
    }
    return 0;
}