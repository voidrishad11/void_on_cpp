#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) 
{
    if (num < 2) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

vector<int> generateNPrimes(int count) 
{
    vector<int> primes;
    int num = 2;

    while (primes.size() < count) 
    {
        if (isPrime(num)) 
        {
            primes.push_back(num);
        }
        ++num;
    }
    return primes;
}

int main() 
{
    int n, k, t;
    cin >> n >> k;

    vector<int> p = generateNPrimes(k);
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    reverse(a.begin(), a.end());
    for (int i = 0; i < k; i++) 
    {
        for (int j = n-1; j >= 0 ; j--) 
        {
            if (a[j] != 0 && a[j] % p[i] == 0) 
            {
                cout<<a[j]<<"\n";
                a[j] = 0;
            }
        }
        reverse(a.begin(), a.end());
    }
    for (int i = 0; i < n; i++) 
    {
        if(a[i] != 0 )
            cout << a[i] << "\n";
    }
    return 0;
}
