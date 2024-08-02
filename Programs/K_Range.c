#include <stdio.h>

int main() 
{
    float x;
    scanf("%f", &x);
    if (x>100 || x<0)
    {
        printf("Out of Intervals\n");
    }

    // [0,25], (25,50], (50,75], (75,100]
    else if(x>=0 && x<=25)
    {
        printf("Interval [0,25]\n");
    }
    else if( x>25 && x<=50)
    {
        printf("Interval (25,50]\n");
    }
    else if(x>50 && x<=75)
    {
        printf("Interval (50,75]\n");
    }
    else if(x>75 && x<=100)
    {
        printf("Interval (75,100]\n");
    }
    return 0;
}