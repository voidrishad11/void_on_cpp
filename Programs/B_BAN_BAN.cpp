/*------------------------------------------------------
    author    : voidrishad11
    created   : Saturday | 20 April, 2024 | 22.00.03
------------------------------------------------------*/

#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define umap unordered_map
#define uset unordered_set
#define mk make_pair
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define PHI 1.618033988749895 // Golden Ratio
#define PSI -0.618033988749895 // Conjugate of Golden Ratio
#define read(type) readInt<type>()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str="#";
        for(int i=0;i<n;i++)
        {
            str+="BAN";
        }
        n=str.size()-1;

        vector<pair<int,int>>ans;
        int l=1,r=n;
        while(l<r){
            ans.push_back({l,r});
            swap(str[l],str[r]);
            l+=3;
            r-=3;
        }

        cout<<ans.size()<<endl;

        for(auto it: ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}