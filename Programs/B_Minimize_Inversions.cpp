
/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 14 February, 2024 | 23.41.14
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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        pii v[n];
        front(i,0,n-1) cin>>v[i].ff;
        front(i,0,n-1) cin>>v[i].ss;
        sort(v,v+n);
        front(i,0,n-1) cout<<v[i].ff<<" "; cout<<endl;
        front(i,0,n-1) cout<<v[i].ss<<" "; cout<<endl;
    }
    return 0;
}