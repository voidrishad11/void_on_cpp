#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;
    cin >> t;
    while (t--)
     {
        long long a, b;
        cin >> a >> b;
     	if(b%a == 0 || a%b==0) 
        {
            cout<<"true"<<"\n";
        }
	    else 
            cout<<"false"<<"\n";
    }
    return 0;
}