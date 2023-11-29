#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    long long n,m;
    string s,so;
    char fix;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>m;
        cin>>s;
        so = s;
        auto it = unique(s.begin(), s.end());
        s.erase(it, s.end());
        long long l = s.length();
        vector<long long>count(l);
        for (long long j = 0; j < m ; j++)
        {
            fix = s[j];
            for (long long k = j+1; k < m; k++)
            {
                if(fix == s[k])
                {
                    
                }
            }
            
        }
        
    }
    return 0;
}