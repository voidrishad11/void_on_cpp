#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, count = 0;
        cin >> n;
        vi a(n);
        vi ans;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++;
            }
            else
            {
                ans.push_back(count);
                count = 0;
            }
        }
        ans.push_back(count);
        sort(ans.rbegin(), ans.rend());

        if (!ans.empty())
        {
            cout << ans[0] << "\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
