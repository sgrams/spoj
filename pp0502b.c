#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int t, i, j, *n, **N;

	scanf("%d", &t);
	if (t<=100 && t>0)
	{
		N	= malloc(t * sizeof(int));
		n		= malloc(t * sizeof(int));
		for (i=0; i<t; i++)
		{
			scanf("%d", (n+i));
			if (*(n+i) <= 100)
			{
				N[i] = malloc(*(n+i) * sizeof(int));
				
				for (j=0; j<*(n+i); j++)
				{
						scanf("%d", &N[i][j]);
				}
			}
		}
		for (i=0; i<t; i++)
		{
			if(*(n+i)<=100)
			{
				for (j=*(n+i)-1; j>=0; j--)
				{
						printf("%d ", N[i][j]);
				}
				printf("\n");
			}
		}
	}
		free(N), free(n);
		return 0;
}
