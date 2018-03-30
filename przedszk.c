#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int N, i, *a, *b, tmp1, tmp2;
	scanf("%d", &N);
	
	if (N < 1 && N > 20)
		return 1;

	a = malloc (N * sizeof(int));
	b = malloc (N * sizeof(int));

	for (i=0; i<N; i++)
	{
		scanf("%i %i", &a[i], &b[i]);
	}

	for (i=0; i<N; i++)
	{
		tmp1 = a[i];
		tmp2 = b[i];
		while (tmp1!=tmp2)
		{
			if (tmp1>tmp2)
				tmp1-=tmp2;
			else
				tmp2-=tmp1;
		}
		printf("%i\n", (a[i]*b[i])/tmp1);
	}

	free(a);
	free(b);
	return 0;
}
