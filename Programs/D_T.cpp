#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define read(type) readInt<type>()
#define front(i,a,n) for(int i=a;i<=n;i++)
#define back(i,a,n) for(int i=n;i>=a;i--)
#define nL "\n"
#define ll long long int
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define f first
#define s second
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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main () 
{
    ll n;
    cin >> n;
    string s, s1;
    cin.ignore();
    getline(cin,s);
    string ara = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.size(); i++) 
    {
        if(s[i]==' ')
        {
            s1+=' ';
        }
        else
        {
            s1 += ara[(s[i] - 'a' - n + 26) % 26];
        }
    }
    cout << s1 << endl;
    return 0;
}