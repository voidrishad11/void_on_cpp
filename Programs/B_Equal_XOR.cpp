/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 03 April, 2024 | 22.26.56
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
        int n,k;
        cin>>n>>k;
        k = k*2;
        vector<int>v(2*n);
        vector<int>cnt(n+1);
        for(int i=0;i<2*n;i++){
            cin>>v[i];
        }

        //hashing
        for(int i=0;i<n;i++){
            cnt[v[i]]++;
        }

        vector<int>zero,one,two;

        for(int i=1;i<=n;i++){
            if(cnt[i]==0) zero.push_back(i);
            else if(cnt[i]==1) one.push_back(i);
            else two.push_back(i);
        }

        int j=0;
        for(auto it:two){
            if(j<k){
                cout<<it<<" "<<it<<" ";
                j+=2;
            }
        }

        for(auto it:one){
            if(j<k){
                cout<<it<<" ";
                j++;
            }
        }
        cout<<endl;
        j=0;

        for(auto it:zero){
            if(j<k){
                cout<<it<<" "<<it<<" ";
                j+=2;
            }
        }

        for(auto it:one){
            if(j<k){
                cout<<it<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}