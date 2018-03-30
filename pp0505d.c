#include <stdio.h>
#include <stdlib.h>

char gray(int n, int *tab, int k, char direction);
int main (void)
{
	int *n, *tab, t, k, tmp;

	scanf("%d", &t);
	
	if (!(t>0))
			return main;
	
	n = malloc(t * sizeof *n);
	
	for (i=0; i<t; i++)
	{
		scanf("%d", tmp);
		if(tmp>0 && tmp<12)
			n[i]=tmp;
	}

	for (i=0; i<t; i++)
	{
		k = 0;
		printf("%s", gray(n, *tab, k, direction))
	}
	
	free(n);
	return 0;
}
char gray(int n, int *tab, int k, char direction)
{
	if (n == k)
	{
		return *tab;
	}
	else if ()
}
