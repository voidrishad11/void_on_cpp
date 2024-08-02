#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long i,n,j,l,over,ball;
    string s,ov = "OVER",ba = "BALL";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        over = 0;
        ball = 0;
        cin>>s;
        l = s.length();
        for (j = 0; j < l; j++)
        {
            if (s[j]!='N' && s[j]!='W' && s[j]!='D')
            {
                ball++;
            }
        }
        over = ball/6;
        ball = ball%6;
        if (over>1)
        {
            ov = ov+'S';
        }
        if (ball>1)
        {
            ba = ba+'S';
        }
        if (over == 0)
        {
            cout<< ball<<" "<<ba<<"\n";
        }
        else
        {
            if(ball == 0)
            {
                cout<< over<<" "<<ov<<"\n";
            }
            else
            {
                cout<<over<<" "<<ov<<" "<<ball<<" "<<ba<<"\n";
            }
        }
    }
    return 0;
}