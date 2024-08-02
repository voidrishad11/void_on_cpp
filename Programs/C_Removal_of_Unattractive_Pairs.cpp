/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 14 March, 2024 | 22.58.41
------------------------------------------------------*/

#include <bits/stdc++.h>
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
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,mx=0;
        ll v[26]={0};
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++){
            v[s[i]-'a']++;
            mx = max(mx,v[s[i]-'a']);
        }
        cout<<(max(n%2,2*mx-n))<<endl;;
        
    }
    return 0;
}