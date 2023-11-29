#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long n,a_l,b_l;
    bool c = true;
    cin>>n;

    cin>>a_l;
    vector<int>a(a_l);
	for (int i = 0; i < a_l; i++){
        cin>>a[i];
    }

    cin>>b_l;
    vector<int>b(b_l);
	for (int i = 0; i < b_l; i++){
        cin>>b[i];
    }

    a.insert(a.end(),b.begin(),b.end());
    sort(a.begin(), a.end());
    auto it = unique(a.begin(), a.end());
    a.erase(it, a.end());

    if (a.size() == n && a[n - 1] == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}