/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 04 July, 2024 | 20.04.08
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
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

bool attack(vector<pair<int, int>>& ghora)
{
    vector<pair<int, int>> moves ={{2, 1}, {2, -1}, {-2, 1}, {-2, -1},{1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

    for (int i = 0; i < ghora.size(); i++)
    {
        for (int j = i + 1; j < ghora.size(); j++)
        {
            int x1,x2,y1,y2;
            x1 = ghora[i].first;
            y1 = ghora[i].second;
            x2 = ghora[j].first;
            y2 = ghora[j].second;
            for (auto temp : moves)
            {
                if (x1 + temp.first == x2 && y1 + temp.second == y2)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--) 
    {
        vector<pair<int, int>> ghora;
        for (int i = 0; i < 3; i++)
        {
            string row;
            cin >> row;
            for (int j = 0; j < 3; j++)
            {
                if (row[j] == 'h')
                {
                    ghora.push_back({i, j});
                }
            }
        }
        if (attack(ghora))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
