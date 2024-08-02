/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 03 March, 2024 | 03.36.01
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
int main() 
{
    string input;
    vll vec;

    // Read the input as a string
    getline(cin, input);
    ll t;
    cin >> t;
    // Remove the '[' and ']' characters from the input string
    input = input.substr(1, input.size() - 2);

    // Create a stringstream from the modified input string
    stringstream ss(input);
    string token;

    // Parse the comma-separated integers from the stringstream
    while (getline(ss, token, ',')) {
        // Convert the token to integer and push it into the vector
        vec.push_back(stoi(token));
    }

    // for (ll i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    

    // Output the vector
    for (ll i = 0; i < vec.size(); i++)
    {
        for (ll j = i+1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == t)
            {
                cout<<"["<<i<<","<<j<<"]"<<nL;
                break;
            }
        }
    }
    return 0;
}
