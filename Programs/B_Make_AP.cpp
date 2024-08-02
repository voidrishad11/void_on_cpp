/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 16 March, 2024 | 23.23.40
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
bool solve(){
    // have to prove b-a = c-b
    ll a,b,c;
    cin>>a>>b>>c;
    if(b-a==c-b){
        return 1;
    }
    if((c+a)%(2*b)==0){
        return 1;
    }
    if((2*b-c)>0 && ((2*b-c)%a)==0){
        return 1; 
    }
     
    if((2*b-a)>0 && ((2*b-a)%c)==0){
        return 1;
    }
    
    return 0;
}
int main ()
{
    fast;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        if(solve()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}