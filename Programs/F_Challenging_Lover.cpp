/*------------------------------------------------------
    author    : voidrishad11
    created   : Friday | 28 June, 2024 | 19.27.14
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
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

ll sumOfDiv(ll N)
{
    ll sum = 0;
    for (ll i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            if (i == (N / i)) 
            {
                sum += i; // like 4 re 2 diye vag dile 2 abar pabo cause 2 gun 2 4, tai ekbar e jog
            }
            else
            {
                sum += i + (N / i); // like 8 re 2 diye vag dile 2 o pabo 4 o tai duitai jog
            }
        }
    }
    return sum;
}

//prime er jonno etai best
bool isPrime(ll num)
{
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i * i <= num; i += 6)
    {
        if ((num % i == 0) || (num % (i + 2) == 0)) return false;
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll N;
        cin >> N;
        ll sum = sumOfDiv(N);
        if (isPrime(sum))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
