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
        long long n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != s[i+1])
            {
                size_t posToRemove = i;
                if (posToRemove < s.size()) 
                {
                    s.erase(posToRemove, 1);
                }
                posToRemove = i;
                if (posToRemove < s.size()) 
                {
                    s.erase(posToRemove, 1);
                }
                i = 0;
            }
        }
        cout<<s.size()<<"\n";
             
    }
    
    return 0;
}