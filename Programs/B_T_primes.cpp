
/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 10 January, 2024 | 13.38.15
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
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
#define front(i,a,n) for(ll i=a;i<=n;i++)
#define sz(x) (int((x).size()))

int main ()
{
    //sieve of eratosthenes
    vector<int>ara;
    ara.resize(1000000); //vector size
    fill(ara.begin(),ara.end(),0);//set each values of vector is zero
    front(i,2,1000000)
    {
        if(ara[i]==0)
        {
            for(int j=2; i*j<=1000000;j++)
            {
                ara[i*j]=1; // mark all multiples of i by assigning 1
            }
        }
    }
    
    int n;
    cin>>n;
    ll element;
    ll sq;
    front(i,1,n){
        cin>>element;
        sq = sqrt(element);
        if(sq*sq==element && ara[sq]==0 && element!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}