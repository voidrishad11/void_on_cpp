/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 03 January, 2024 | 11.56.39
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll area_rec = 2*a*b;
        ll i = 1;
        ll sq = i*i;
        for (i = 1; ; i++)
        {
            sq = i*i;
            if( sq >= area_rec && i >= min(a,b)*2 )
            {
                cout<<sq<<"\n";
                break;
            } 
        }
        
    }
    return 0;
}