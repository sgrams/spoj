#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i, j, t, *n, tmp1, tmp2;

	scanf("%i", &t);

	if (t<0 || t>100)
		return 1;

	n = malloc(t*sizeof(int));

	for (i=0; i<t; i++)
	{
		tmp1 = 0;
		scanf("%i", &n[i]);

		for (j=0; j<n[i]; j++)
		{
			scanf("%i", &tmp2);
			tmp1+=tmp2;
		}
		n[i]=tmp1;
	}

	for (i=0; i<t; i++)
	{
		printf("%i\n", n[i]);
	}

	free(n);
	return 0;
}
