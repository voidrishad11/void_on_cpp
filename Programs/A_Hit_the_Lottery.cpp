/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Tuesday | 14 January, 2025 | 05:20:41 GMT +6
---------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define mii map<int, int>
#define si set<int>
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define nL "\n"
#define pb push_back
#define mk make_pair
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main()
{
    ll n,c=0,d,left;
    cin>>n;
    left = n;

    if(left>=100)
    {
        c += left/100;
        left = left%100;    
    }
    if (left>=20){
        c += left/20;
        left = left%20;
    }
    if (left>=10){
        c += left/10;
        left = left%10;
    }
    if (left>=5){
        c += left/5;
        left = left%5;
    }
    if (left != 0){
        c += left;
    }
    cout<<c<<"\n";
    return 0;
}