#include<stdio.h>

int main ()
{
    int a,b,c=5;
    //for first half
    for (a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++) 
        {
            printf("*");
        }
        printf("\n");
    }
    //for second half
    for (a=1;a<=5;a++)
    {
        for(b=1;a+b<=c;b++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}