#include <stdio.h>

int main() 
{
    int a,b,c,aa,bb,cc,dd;
    scanf("%d %d %d %d", &a,&b,&c);
    if (a>=b && a>=c)
    {
        aa = a;
        if (b >= c)
        {
            bb = b;
            cc = c;
        }
        else
        {
            bb = c;
            cc = b;
        }
    }
    else if (b >= a && b >= c)
    {
        aa = b;
        if (a >= c)
        {
            bb = a;
            cc = c;
        }
        else
        {
            bb = c;
            cc = a;
        }
    }
    else
    {
        aa = c;
        if (b >= c)
        {
            bb = b;
            cc = c;
        }
        else
        {
            bb = c;
            cc = b;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", cc,bb,aa,a,b,c);
    return 0;
}