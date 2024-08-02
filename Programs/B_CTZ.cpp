/*------------------------------------------------------
    author    : voidrishad11
    created   : Sunday | 14 January, 2024 | 18.11.06
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
#include <iostream>
#include <bitset>

string decToBinary(const string& decimalStr) 
{
    int decimalNumber = stoi(decimalStr);
    bitset<32> binaryRepresentation(decimalNumber);
    return binaryRepresentation.to_string();
}

int main() 
{
    string num;
    cin >> num;
    ll c = 0;
    string bin = decToBinary(num);
    for (ll i = bin.size()-1; i >=0 ; i--)
    {
        if (bin[i] == '0')
        {
            c++;
        }
        else
            break;
    }
    cout << c << "\n";

    return 0;
}

