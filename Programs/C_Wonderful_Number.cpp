#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <bitset>
using namespace std;

string intToBinary(int n) 
{
    return bitset<sizeof(int) * 8>(n).to_string();
}

int main() 
{
    int n;
    cin>>n;
    string bin = intToBinary(n);
    string nib = bin;
    reverse(bin.begin(),bin.end());
    if( (bin == nib ) && (n % 2 != 0))
        cout <<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
