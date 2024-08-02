#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
    ll t;
    cin >> t;

    for (ll tt = 1; tt <= t; tt++) 
    {
        ll n,i;
        cin >> n;
        ll x = 1;

        vector<ll> a;
        a.push_back(1);

        for (i = 1; x != n; i++) 
        {
            if ((i + 1) % 2 == 0) 
            {
                x = (a[i / 2] * a[i / 2]) + 1;
            } 
            else 
            {
                x = (a[(i) / 2] * a[(i / 2) + 1]) + 2;
            }
            a.push_back(x);
        }
        cout << "Case " << tt << ": " << i + 1 << "\n";
    }

    return 0;
}
