#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i, D, *X;
	
	scanf("%d", &D);
	X = malloc(D * sizeof(X));

	if (D>=1 && D<=500)
	{
		for (i=0; i<D; i++)
		{
			scanf("%d", (X+i));
		}
		for (i=0; i<D; i++)
		{
			printf("%d\n", *(X+i) * *(X+i));
		}
	}
	free(X);
	return 0;
}
