#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int min_cost(int k, vector<long long>& c) 
{
    int n = c.size();
    sort(c.begin(), c.end(), greater<long long>());

    int minCost = 0;
    int multiplier = 1;

    for (int i = 0; i < n; i++) 
    {
        minCost += multiplier * c[i];
        if ((i + 1) % k == 0) 
        {
            multiplier++;
        }
    }
    return minCost;
}

int main() 
{
    long long n, k;
    cin >> n >> k;

    vector<long long>c(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> c[i];
    }
    int result = min_cost(k, c);
    cout << result << endl;

    return 0;
}
