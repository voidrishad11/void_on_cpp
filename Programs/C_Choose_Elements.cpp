/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 31 August, 2024 | 22:54:09 GMT +6
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
    ll n,k;
    cin>>n>>k;
    ll sum = 0;
    vll a(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    for (ll i = 0; i < k; i++)
    {
        sum += a[i];
    }
    cout << sum << nL;
    return 0;
}