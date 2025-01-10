#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'



signed main()
{
    optimize()
    string s;
    cin >> s;
    int i = max_element(s.begin(),s.end()) -s.begin() ;
    for(auto u : s){
        if(u==s[i])cout<<u;
    }


}