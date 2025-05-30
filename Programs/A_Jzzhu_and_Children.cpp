/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Thursday | 15 May, 2025 | 05:11:03 GMT +6
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

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++) {
        int candies;
        cin >> candies;
        q.push({candies, i}); // {candies_needed, child_index}
    }

    int last = -1;
    while (!q.empty()) {
        auto [candies, idx] = q.front();
        q.pop();
        
        candies -= m;
        if (candies > 0) {
            q.push({candies, idx});eas
        } else {
            last = idx;
        }
    }

    cout << last << "\n";
    return 0;
}
