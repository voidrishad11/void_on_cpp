#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long n,x,y;
    cin>>n;
    if(n%2==0){
        x = n/2;
        y = x;
    }
    else{
        x = n/2+1;
        y = n-x ;
    }
    while(1){
        if((x%2==0 || x%3==0 || x%5==0 || x%7==0 || x%11==0) && 
        (y%2==0 || y%3==0 || y%5==0 || y%7==0 || y%11==0) && 
        (x!=2 && x!=3 && x!=5 && x!=7 && x!=11 && 
        y!=2 && y!=3 && y!=5 && y!=7 && y!=11)){
            cout<<x<<" "<<y<<"\n";
            break;
        }
        else{
            x++;
            y--;
        }
    }
    return 0;
}
