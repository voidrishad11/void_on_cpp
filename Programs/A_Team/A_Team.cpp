#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long i,j,n,a[1000],b[1000],c[1000],problem_count,sum;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    problem_count=0;
    for(i=1;i<=n;i++){

        if(a[i]==1){
            if(b[i]==1 || c[i]==1)
                problem_count++;
        }
        else if(b[i]==1 && c[i]==1)
            problem_count++;
    }
    cout<<problem_count<<"\n";
    /*sum = 0;
    for(j=0;j<=i-1;j++){
        sum = sum + problem_count[i];
    }
    cout<<sum<<"\n";*/
    return 0;
}

