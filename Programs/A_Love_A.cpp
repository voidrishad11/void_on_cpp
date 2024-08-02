/*------------------------------------------------------
    author    : voidrishad11
    created   : Wednesday | 24 January, 2024 | 17.58.42
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
#define sz(x) (int((x).size()))
int main()
{
	ios::sync_with_stdio(0),cin.tie(0);
	string s;
    cin>>s;
	int a=0,b=0;
	for(int i=0;i<s.size();i++)
    {
		if(s[i]=='a')a++;
		else b++;
	}
	if(a<=b)b=a-1;
	cout<<a+b<<endl;
}


