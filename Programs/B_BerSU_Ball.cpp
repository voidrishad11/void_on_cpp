/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 24 February, 2024 | 23.37.44
------------------------------------------------------*/
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
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
#define f first
#define s second
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
    ll n,m;
    cin>>n;
    vll boy;
    front(i,0,n-1){
        ll x;
        cin>>x;
        boy.push_back(x);
    }
    sort(boy.begin(),boy.end());
    cin>>m;
    vll girl;    
    front(i,0,m-1){
        ll y;
        cin>>y;
        girl.push_back(y);
    }
    sort(girl.begin(),girl.end());
    ll result =0;
    front(i,0,n-1){
        front(j,0,m-1){
            if(abs(boy[i]-girl[j])<=1){
                girl[j]=1000;
                result++;
                break;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}