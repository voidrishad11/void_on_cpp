#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long t,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long l = s.size(),flag = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'b')
            {
                flag = 1;  
            }
            else if (s[i] == 'B')
            {
                flag = 2;  
            }
            else
            {
                flag = 0;
            }
            if ( flag != 0 )
            {
                s[i]='#';
                for (int j = i-1; j >= 0; j--)
                {
                    if (flag == 1)
                    {
                        if(s[j] >= 'a' && s[j] <= 'z')
                        {
                            s[j]='#';
                            flag = 0;
                            break;
                        }
                    }
                    else if (flag == 2)
                    {
                        if(s[j] >= 'A' && s[j] <= 'Z')
                        {
                            s[j]='#';
                            flag = 0;
                            break;
                        }
                    }
                }
            }
             
        }
    char charToRemove = '#';
    s.erase(remove(s.begin(), s.end(), charToRemove), s.end());
    cout<<s<<"\n";
    }
    return 0;
}