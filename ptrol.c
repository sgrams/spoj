#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i, j, t, **n, tmp;
	
	scanf("%i", &t);
	if (t>100)
		return EXIT_FAILURE;

	n = malloc (t * sizeof(int));

	for (i=0; i<t; i++)
	{
		scanf("%i", &tmp);
		float *ptr = realloc (*n, (sizeof(*n) + ((tmp+1) * sizeof(*n))));
		n[i][0] = tmp;

		for (j=1; j<=n[i][0]; j++)
			scanf("%i", &n[i][j]);
	}

	for (i=0; i<t; i++)
	{
		for (j=1; j<=n[i][0]; j++)
			printf("%i ", n[i][j]);
		printf("\n");
	}

	free(n);
	return 0;
}
