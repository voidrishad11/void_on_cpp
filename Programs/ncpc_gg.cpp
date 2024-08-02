#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    for(ll c = 1; c <= t; c++) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        string s1, s2;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            s1 += to_string(a[i]);
        }
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
            s2 += to_string(b[i]);
        }
        unordered_map<string, int> count1;

        for(ll i = 0; i < n; i++) 
        {
            string temp = s1.substr(0, i);
            string temp1 = s1.substr(i, n);
            count1[temp]++;
            count1[temp1]++;
        }
        string str = s1.substr(0, 1) + s1.substr(n - 1, 1);
        count1[str]++;

        ll mx = 0;
        string curr = "";
        for(ll i = 0; i < s2.size(); i++) {
            curr += s2[i];
            if(count1.find(curr) != count1.end()) {
                mx = max(mx, (ll)curr.size());
            }
        }
        cout<<"Case "<<c<<": "<<n-mx<<endl;
    }
    return 0;
}