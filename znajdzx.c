#include <stdio.h>
#include <stdlib.h>

int szukaj (int p, int k, int *Z, int x);
int main (void)
{
	int tablica[10] = {1, 3, 5, 7, 9, 11, 14, 19, 20, 21};
	int x = 19;
	int p = 0;
	int k = 9;
	printf("Indeks szukanej wartosci to %d\n", szukaj(p, k, tablica, x));
	return 0;
}
int szukaj (int p, int k, int *Z, int x)
{
	int sr, tmp = -1;
	while(p<=k)
	{
		sr = (p+k)/2;
		if (x == Z[sr])
		{
			tmp = sr;
			break;
		}
		else if (x < Z[sr])
			k = sr -1;
		else
			p = sr +1;
	}

	return tmp;
}
