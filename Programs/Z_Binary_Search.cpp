/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 08 March, 2024 | 12.16.38
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

ll binarySearch(const vll& arr, ll target) 
{
    ll left = 0;
    ll right = arr.size() - 1;
    bool flag = false;
    while (left <= right) 
    {
        ll mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
            flag = true;
            break;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (!flag)
    {
        return -1;
    }
}

int main()
{
    ll n,k,tt,ind;
    cin>>n>>k;
    vll a(n);
    bool c = false;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while (k--)
    {
        cin >> tt;
        c = false;
        ind = binarySearch(a, tt);
        if (ind == -1)
        {
            cout<<"not found\n";
        }
        else
        {
            cout<<"found\n";
        }
    }
    return 0;
}
