#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s,ans;
    long long i;
    cin>>s;
    long long n = s.length(),m;
    for(i=0;i<n;i++){
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
            ans += '.';
            ans += s[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}
