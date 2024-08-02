#include <stdio.h>

int main() 
{
    int a, b;
    int ceil, floor, round;
    scanf("%d %d", &a, &b);
    
    floor = a / b;
    int frac = a % b;
    if (frac == 0) 
    {
        ceil = floor;
    } 
    else 
    {
        ceil = floor + 1;
    }
    
    if (frac * 2 >= b) 
    {
        round = floor + 1;
    } 
    else
    {
        round = floor;
    }

    printf("floor %d / %d = %d\n", a, b, floor);
    printf("ceil %d / %d = %d\n", a, b, ceil);
    printf("round %d / %d = %d\n", a, b, round);

    return 0;
}
