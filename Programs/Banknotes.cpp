#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() 
{
    long long n,t,hund,fif,twe,ten,fiv,two,one;
    cin>>n;
    t = n;
    hund = n / 100;
    if(n>=100)
        n = n % 100;
    fif = n / 50;
    if(n>=50)
        n = n % 50;
    twe = n / 20;
    if(n>=20)
        n = n % 20;
    ten = n / 10;
    if(n>=10)
        n = n % 10;
    fiv = n / 5;
    if(n>=5)
        n = n % 5;
    two = n / 2;
    if(n>=2)
        n = n % 2;
    one = n;
    cout<<t<<"\n";
    cout<<hund<<" nota(s) de R$ 100,00\n";
    cout<<fif<<" nota(s) de R$ 50,00\n";
    cout<<twe<<" nota(s) de R$ 20,00\n";
    cout<<ten<<" nota(s) de R$ 10,00\n";
    cout<<fiv<<" nota(s) de R$ 5,00\n";
    cout<<two<<" nota(s) de R$ 2,00\n";
    cout<<one<<" nota(s) de R$ 1,00\n";
    return 0;
}