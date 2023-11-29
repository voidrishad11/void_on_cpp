#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>three;
    vector<long long>five;
    for(long long i = 1;i<=n;i++)
    {
        long long f,j,k,sum1=0,sum2=0,t,fi;
        cin>>f;
        for(j=1,t=0;j*3<=f-1;j++)
        {
            three.push_back(j*3);
            t++;
        }
        for(j=1,fi=0;j*5<=f-1;j++)
        {
            five.push_back(j*5);
            fi++;
        }
        /*for(j=0;j<f;j++)
        {
            cout<<three[j]<<" ";
            cout<<five[j]<<" ";
        }*/
        
        for (k = 0; k < t; k++)
        {
            sum1 = sum1 + three[k];
        }
        for (k = 0; k < fi; k++)
        {
            sum2 = sum2 + five[k];
        }
        cout<<sum1+sum2<<"\n";
    }
    return 0;
}
