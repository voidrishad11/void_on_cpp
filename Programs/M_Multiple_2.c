#include <stdio.h>

int main() 
{
    unsigned long long a,b,c,d;
    scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
    unsigned long long sum;
    sum = (a % 100)*(b % 100)*(c % 100)*(d % 100);
    sum %= 100;
    printf("%llu\n", sum);
    return 0;
}
