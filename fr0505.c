#include <stdio.h>
int main (void)
{
	int a, i, tmp;
	int *n;

	scanf("%d", &a);
	n = malloc(a * sizeof(*n));

	if(a<=1000000)
	{
		for (i=0; i<n; i++)
		{
			scanf("%d", &tmp);
			if(tmp>1 && tmp<1000001)
				*(n+i)=tmp;
		}
		for (i=0; i<n; i++)
		{
			abs()
		}
	}
	free(n);
	return 0;
}
