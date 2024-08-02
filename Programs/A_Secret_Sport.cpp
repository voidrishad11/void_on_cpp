#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long i = 1; i <= n; i++) {
        long long m;
        cin >> m;
        string s;
        cin >> s;

        long long aw = 0, bw = 0;
        long long a = 0, b = 0;
        long long temp = ((m / 3) * 3);

        for (long long j = 0; j < m; j++)
        {
            if (s[j] == 'A') 
            {
                a++;
            } 
            else 
            {
                b++;
            }
            if (((j + 1) % 3) == 0) 
            {
                if (a > b) 
                {
                    aw++;
                } 
                else 
                {
                    bw++;
                }
                a = 0;
                b = 0;
            } 
            else if ((j + 1) > temp) 
            {
                if (a > b) 
                {
                    aw += a;
                } 
                else if (a < b)
                {
                    bw += b;
                }
                a = 0;
                b = 0;
            }
        }
        if (aw == bw)  
        {
            aw=0;
            bw=0;
            a=0;
            b=0;
            reverse(s.begin(),s.end());
            for (long long j = 0; j < m; j++)
            {
                if (s[j] == 'A') 
                {
                    a++;
                } 
                else 
                {
                    b++;
                }
                if (((j + 1) % 3) == 0) 
                {
                    if (a > b) 
                    {
                        aw++;
                    } 
                    else 
                    {
                        bw++;
                    }
                    a = 0;
                    b = 0;
                } 
                else if ((j + 1) > temp) 
                {
                    if (a > b) 
                    {
                        aw += a;
                    } 
                    else if (a < b)
                    {
                        bw += b;
                    }
                    a = 0;
                    b = 0;
                }
            }
        }
        if (aw > bw) 
        {
            cout << "A" << endl;
        } 
        else if (aw < bw) 
        {
            cout << "B" << endl;
        } 
        else 
        {
            cout << "?" << endl;
        }
    }

    return 0;
}
