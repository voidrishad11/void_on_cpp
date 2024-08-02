#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long long n,i,a,b,temp,c;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a>>b;
        temp = a;
        /*while(1){
            if(a%b==0){
                c = a-temp;
                break;
            }
            else{
                a++;
            }
        }*/
        c = (b - (temp % b)) % b;
        cout<<c<<"\n";
    }
    return 0;
}