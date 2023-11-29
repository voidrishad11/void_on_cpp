#include<iostream>
#include<string>
#include<set>
#include<vector>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    vector<int>c(n);
    for (i=0;i<n;i++){
        cin>>c[i];
    }
    set<int>unique_number(c.begin(), c.end());
    long long count = unique_number.size();
    if(count%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else{
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}


