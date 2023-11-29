#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    vector<string> s(n);
    vector<string> s2(n);
    for(i=0;i<n;i++){
        cin>>s[i];
        transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
        if(s[i] == "yes")
            s2[i] = "YES";
        else
            s2[i] = "NO";
    }
    for(i=0;i<n;i++){
        cout<<s2[i]<<"\n";
    }
    return 0;
}
