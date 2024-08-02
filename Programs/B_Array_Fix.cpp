/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 27 March, 2024 | 23.48.28
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
int temp=INT_MAX;
bool product(int x){
    if(x<=temp){
        temp=x;
        return true;
    }
    else{
        while (x!=0)
        {
            int rem = x%10;
            x=x/10;
            if(temp<rem) return false;
            else temp=rem;
        }
        return true;
    }
}

using namespace std;
int main ()
{
    fast;
    ll tc;
    cin>>tc;
    while (tc--)
    {   
        temp=INT_MAX;
        int n,fg=1;
        cin>>n;
        vll v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ans = true;
        for(int i=n-1;i>=0;i--){
            ans=product(v[i]);
            if(!ans){
                cout<<"NO\n";
                fg=0;
                break;
            }
        }
        if(fg)cout<<"YES\n";
    }
    
    return 0;
}