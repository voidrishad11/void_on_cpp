/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 03 January, 2024 | 11.12.19
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
#define nL "\n"
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,n,sum;
        cin >> a >>b >> c >> n;
        sum = a+b+c+n;
        if (( sum % 3 == 0 ) && (sum/3 >= max(a,(max(b,c)))))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}