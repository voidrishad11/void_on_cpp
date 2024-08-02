
/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 29 February, 2024 | 23.38.12
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#define read(type) readInt<type>()
#define front(i,a,n) for(ll i=a;i<=n;i++)
#define back(i,a,n) for(ll i=n;i>=a;i--)
#define nL "\n"
#define ll long long int
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define ff first
#define ss second
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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main ()
{
    fast;
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        vll store1(a);
        vll store2(b);
        for(ll i=0;i<a;i++){
            cin>>store1[i];
        }
        for(ll i=0;i<b;i++){
            cin>>store2[i];
        }
        sort(all(store1));
        sort(all(store2));
        ll total = 0;
        for(ll i=0;i<a;i++){
            total+=max(abs(store1[i]-store2[b-i-1]),abs(store1[i]-store2[a-i-1]));
        }
        cout<<total<<endl;
    }
    return 0;
}