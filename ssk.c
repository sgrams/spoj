#include <stdio.h>
#include <stdlib.h>
 
int main (void)
{
	int i, j, n;
	int *x, *y, *spr;
	int licz = 0;
	
	scanf("%i", &n);
	
	if (!(n <= 500000 && n > 0))
		return 0;
	
	x = malloc (n * sizeof(int));
	y = malloc (n * sizeof(int));
	spr = malloc(n* sizeof(int));
		
	for (i=0; i<n; i++)
	{
	scanf ("%i %i", (x+i), (y+i));
	}
	
	for (i=0; i<n; i++)
	{
		if (spr[i]!=1)
		{
			for (j=i+1; j<n; j++)
			{
				if ((spr[j]!=1) && ((x[j] >= y[i]) || (y[j] <= x[i])))
				{
					licz++;
					spr[j]=1;
					break;
				}
			}
		}
	}
	
	printf("%i\n", licz);
	
	free (x);
	free (y);
	free (spr);
	return 0;
}
