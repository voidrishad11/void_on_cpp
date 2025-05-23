/*---------------------------------------------------------------------------------------
         author    : voidrishad11
         created   : Saturday | 19 October, 2024 | 19:10:02 GMT +6
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
    int N;
    cin >> N;
    
    vector<int> popul(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> popul[i];
    }
    
    long long kill = 0;
    
    for (int i = N - 2; i >= 0; i--) 
    {
        if (popul[i] >= popul[i + 1]) 
        {
            kill += popul[i] - (popul[i + 1] - 1);
            popul[i] = popul[i + 1] - 1;
            
            if (popul[i] < 0) 
            {
                cout << 1 << nL;
                return 0;
            }
        }
    }
    cout << kill << nL;
    return 0;
}
