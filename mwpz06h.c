#include <stdio.h>

int main (void)
{
	int D, n, *N;

	scanf("%d", &D);
	
	if (D>=1 && D<=500)
	{
		N = malloc(D * sizeof(N));
	}

	free(N);
	return 0;
}
