/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 04 July, 2024 | 19.43.59
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
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
    int n,q;
    cin>>n>>q;
    
    string s;
    cin>>s;
    
    vector<int> v(26, 0);

    for (int i = 0; i < n; ++i) 
    {
        v[s[i]-'a']++;
    }
    
    while (q--) 
    {
        int l,r,k;
        cin>>l>>r>>k;
        
        l--; r--;
        
        int ans=0;
        
        for (int i=0; i<26; i++) 
        {
            int count = v[i];
            if (l>0) 
            {
                count-=(v[i] - v[i]);
            }
            
            if (count%2 != 0) {
                ans++;
            }
        }
        
        if (ans<=k && k<=(r-l+1)) 
        {
            cout << "Yes" << endl;
        } 
        else 
        {
            cout << "No" << endl;
        }
    }
    return 0;
}