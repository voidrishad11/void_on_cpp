/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 22 December, 2023 | 19.48.08
------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
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
    ll n;
    cin>>n;
    vi a(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    for (ll i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}