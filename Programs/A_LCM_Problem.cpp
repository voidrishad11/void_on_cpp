/*------------------------------------------------------
    author    : voidrishad11
    created   : Tuesday | 02 January, 2024 | 22.58.23
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
		ll l,r;
		bool possible = false;
		cin>>l>>r;
		if(l*2<=r)
        {
			cout<<l<<" "<<l*2<<endl;
		}
		else
        {
			cout<<-1<<" "<<-1<<endl;
		}
	}
	return 0;
}