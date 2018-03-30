#include <stdio.h>
#include <math.h>

int main (void)
{
	int n, i, j;

	}
	scanf("%d", &n);
	if (n>0 && n<=1000000)
	{
		for(i=0; i<(n/2); i++)
		{
			j=i;
			printf("%d", j+1);
			j++;
			if (j-2>=0){
				printf(" %d ", j-2);
			}
		}
		printf("\n");
	}
	else
		printf("NIE \n");
	return 0;
}
