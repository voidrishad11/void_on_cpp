#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    long long t,ans=0;
    cin>>t;
    vector<string>a(t);
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
        if(a[i]=="Tetrahedron")
            ans+=4;
        else if(a[i]=="Cube")
            ans+=6;
        else if(a[i]=="Octahedron")
            ans+=8;
        else if(a[i]=="Dodecahedron")
            ans+=12;
        else if(a[i]=="Icosahedron")
            ans+=20;
    }
    cout<<ans<<"\n";
    return 0;
}
