#include <bits/stdc++.h>
#define int long long
#include <algorithm>
using namespace std;


int32_t main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++) 
        {
            cin>>arr[i];
        }
        int ans=arr[0];
        for (int i=0;i<n-1;i++) 
        {
            ans+=max(arr[i+1]-arr[i],0LL);
        }
        ans--;
        cout<<ans<<endl;
    }
    return 0;
}