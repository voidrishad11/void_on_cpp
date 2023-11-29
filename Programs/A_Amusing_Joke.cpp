#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string s1,s2,sf,stemp;
    cin>>s1;
    cin>>s2;
    cin>>sf;
    s1.insert(s1.end(),s2.begin(),s2.end());
    sort(s1.begin(),s1.end());
    sort(sf.begin(),sf.end());
    if(s1==sf){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}