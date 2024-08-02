/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 03 June, 2024 | 23.14.05
------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nL "\n"
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
int main()
{
    vll a(3),b(3);
    cin >> a[0] >> a[1] >> a[2];
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];

    sort(all(a));

    cout<<a[0]<<nL<<a[1]<<nL<<a[2]<<nL<<nL<<b[0]<<nL<<b[1]<<nL<<b[2]<<nL;
    return 0;
}