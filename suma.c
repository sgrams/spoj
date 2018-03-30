#include <stdio.h>

int main (void)
{
	int A, suma;
	suma = 0, A = 0;

	while ((scanf("%d", &A) != EOF) && A>=-100 && A<=100)
	{
		suma = suma + A;
		printf("%d\n", suma);
	}
	return 0;
}
