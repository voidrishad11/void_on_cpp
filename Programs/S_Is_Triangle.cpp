/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 25 December, 2023 | 20.55.39
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
    ll a,b,c;
    double area,s;
    cin>>a>>b>>c;
    if(((a+b)>c) && ((c+b)>a) && ((a+c)>b))
    {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Valid\n" << area << fixed << setprecision(6) << "\n";
    }
    else
        cout<<"Invalid\n";
    return 0;
}