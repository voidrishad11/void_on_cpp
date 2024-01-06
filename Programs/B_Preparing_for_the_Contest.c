#include <stdio.h>

int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n,k;
        scanf("%d %d",&n,&k);
		for(int i=0 ; i < k ; i++)
        {
            printf("%d ",i+1);
		}
		for(int i = n ; i > k ; i--)
        {
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}