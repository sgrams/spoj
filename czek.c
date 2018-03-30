#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	short int A, i;
	int *N, *M, wynik;

	scanf("%hd", &A);
	N = malloc (A * sizeof(*N));
	M = malloc (A * sizeof(*M));
	
	if (A<=1000 && A>=1)
	{
		for (i=0; i<A; i++)
		{
			scanf("%d %d", (N+i), (M+i));
			if (*(N+i) < 1 || *(N+i) > 1000 || *(M+i) < 1 || *(M+i) > 1000)
			{
				*(N+i) = 0;
				*(M+i) = 0;
			}
		}
		for (i=0; i<A; i++)
		{
			wynik = 0;
			while(*(N+i) > 0 && *(M+i) > 0)
			{
				wynik = wynik + (*(N+i) * *(M+i));
				*(N+i) = *(N+i) - 1;
				*(M+i) = *(M+i) - 1;
			}
			printf("%d\n", wynik);
		}
	}
			
	free(N);
	free(M);
	return 0;
}
