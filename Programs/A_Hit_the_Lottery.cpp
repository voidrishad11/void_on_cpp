#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n,c=0,d,left;
    cin>>n;
    left = n;
    while (left != 0){
        if(left>=100){
            d = left%100;
            c = c+ left/100;
            left = d;    
        }
        else if (left>=50){
            d = left%50;
            c = c+ left/50;
            left = d;
        }
        else if (left>=20){
            d = left%20;
            c = c+ left/20;
            left = d;
        }
        else if (left>=10){
            d = left%10;
            c = c+ left/10;
            left = d;
        }
        else if (left>=5){
            d = left%5;
            c = c+ left/5;
            left = d;
        }
        else {
            d = left - 1;  // Decrease by 1
            c = c + 1;     // Increase c by 1
            left = d;
        }
    }
    cout<<c<<"\n";
    return 0;
}