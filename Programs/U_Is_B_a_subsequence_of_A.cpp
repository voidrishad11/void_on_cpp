#include <iostream>
#include <vector>

using namespace std;

bool isSubsequence(int n, int m, const vector<int>& a, const vector<int>& b) 
{
    int i = 0, j = 0;
    
    while (i < n && j < m) 
    {
        if (a[i] == b[j]) 
        {
            j++;
        }
        i++;
    }
    
    return j == m;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++) 
    {
        cin >> b[i];
    }

    bool result = isSubsequence(n, m, a, b);

    if (result) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
