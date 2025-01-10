/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 19 October, 2024 | 19:57:59 GMT +6
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
    ll N, K;
    cin >> N >> K;
    
    vector<int> watchHouses(K);
    for (ll i = 0; i < K; i++) 
    {
        cin >> watchHouses[i];
    }
    
    ll tot = N * (N + 1) / 2;
    

    if (K == 0) 
    {
        cout << 0 << nL;
        return 0;
    }

    ll notsafe = 0;
    
    // Gap before
    if (watchHouses[0] > 1) 
    {
        ll gap = watchHouses[0] - 1;
        notsafe += gap * (gap + 1) / 2;
    }
    
    // Gaps between
    for (ll i = 1; i < K; i++) 
    {
        ll gap = watchHouses[i] - watchHouses[i - 1] - 1;
        if (gap > 0) 
        {
            notsafe += gap * (gap + 1) / 2;
        }
    }
    // Gap after
    if (watchHouses[K - 1] < N) 
    {
        ll gap = N - watchHouses[K - 1];
        notsafe += gap * (gap + 1) / 2;
    }
    
    cout << tot - notsafe << nL;
    
    return 0;
}
