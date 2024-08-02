#include <stdio.h>

int main() 
{
    unsigned long long n;
    scanf("%llu", &n);
    unsigned long long sum = (n * (n + 1)) / 2;
    printf("%llu\n", sum);
    return 0;
}
