/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 13 March, 2024 | 22.22.51
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
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n,p;
        cin>>n>>p;
        vll a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vll b(n);
        vector<pair<ll,ll>>v;
        for(ll i=0;i<n;i++){
            cin>>b[i];
            v.push_back(make_pair(min(p,b[i]),a[i]));
        }
        sort(all(v));
        ll ans = p,temp = n-1;
        for(ll i=0;i<n-1;i++){
            ans+=min(v[i].ss,temp)*v[i].ff;
            temp-=min(v[i].ss,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}