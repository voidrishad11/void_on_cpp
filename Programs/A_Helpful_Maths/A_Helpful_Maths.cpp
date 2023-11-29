#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long n,k,i,j;
    string s,ss;
    cin>>s;
    n = s.length();
    for(i=0;i<n;i++){
        if (s[i]== '+')
            s.erase(i,1);
    }
    sort(s.begin(),s.end());
    //cout<<s<<"\n";
    for(i=0,j=0;i<n;i++){
        if (i%2==0){
            ss = ss + s[j];
            j++;
        }
        else
            ss = ss + '+';
    }
    cout<<ss<<"\n";
    return 0;
}

