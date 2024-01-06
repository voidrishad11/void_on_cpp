/*------------------------------------------------------
    author    : voidrishad11
    created   : Monday | 25 December, 2023 | 20.41.06
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
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
int main() 
{
    int A, B;
    cin >> A >> B;
    if(A>B)
        swap(A,B);
        
    // Summation of all numbers between A and B (inclusive)
    int total_sum = (B - A + 1) * (A + B) / 2;
    cout << total_sum << endl;

    // Summation of even numbers between A and B (inclusive)
    int even_sum = (B / 2 + B % 2) * ((B + 1) / 2);
    even_sum -= ((A - 1) / 2) * (A / 2);
    cout << even_sum << endl;

    // Summation of odd numbers between A and B (inclusive)
    int odd_sum = ((B + 1) / 2) * (B / 2 + B % 2);
    odd_sum -= (A / 2) * ((A + 1) / 2);
    cout << odd_sum << endl;

    return 0;
}