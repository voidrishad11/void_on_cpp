/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 19 February, 2024 | 21.07.06
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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> grid(n);
        ll x1 = 0,y1 = 0,x2 = 0,y2= 0;
        bool flag = true;
        for (int i = 0; i < n; i++) 
        {
            cin >> grid[i];
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (grid[i][j] == '1' && flag == true)
                {
                    x1 = i;
                    y1 = j;
                    flag = false;
                }
                else if (grid[i][j] == '1' && flag == false)
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        // cout<<x1<<x2<<y1<<y2<<nL;
        if ((y1-x1)==(y2-x2))
        {
            if (grid[x1][y2] == '1' && grid[x2][y1] == '1')
            {
                cout<<"SQUARE"<<nL;
            }
            else
            {
                cout<<"TRIANGLE"<<nL;
            }
        }
        else
        {
            cout<<"TRIANGLE"<<nL;
        }
        // bool flag2 = true;
        // for (ll i = x1,j= y1; j < y2; j++)
        // {
        //     if (a[i][j] != 1)
        //     {
        //         flag2 = false;
        //         break;
        //     }
        // }
        // cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<" "<<nL;
        // if (flag2)
        // {
        //     for (ll i = x2,j= y2; j > y1; j--)
        //     {
        //         if (a[i][j] != 1)
        //         {
        //             flag2 = false;
        //             break;
        //         }
        //     }
        // }
    }
    return 0;
}