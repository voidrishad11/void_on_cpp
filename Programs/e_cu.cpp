/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 04 July,2024 | 21:36:14 
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
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
   fast;

   int n;
   cin>>n;
   
   vector<int> a(n);
   umap<int,int> mp;

   for(int i=0; i<n; i++)
   {
        cin>>a[i];
        mp[a[i]]++;
   }

   ll count=0;

   for(int i=0; i<n-2; i++)
   {
    for(int j=i+1; j<n-1; j++)
    {
        if(a[j]%a[i]==0)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[k]%a[i] == 0 && a[k]%a[j] != 0)
                {
                    count++;
                }
            }
        }        
    }
   }
   cout<< count << endl;

 return 0;
}