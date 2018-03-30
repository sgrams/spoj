#include <stdio.h>
#include <stdlib.h>

/* 0 - północ
 * 1 - południe
 * 2 - zachód
 * 3 - wschód */

typedef struct
{
	int x;
	int y;
} punkt;

int main (void)
{
	int i, j;
	int D, *N, a, b;
	punkt *pkt;
	scanf("%i", &D);

	N = malloc (D * sizeof (int));
	pkt = malloc (D * sizeof(punkt));

	for (i=0; i<D; i++)
	{
		scanf("%i", &N[i]);
		pkt[i].x = 0;
		pkt[i].y = 0;

		for (j=0; j<N[i]; j++)
		{
			scanf("%i %i", &a, &b);

			if (a == 0)
				pkt[i].y += b;
			else if (a == 1)
				pkt[i].y -= b;
			else if (a == 2)
				pkt[i].x -= b;
			else if (a == 3)
				pkt[i].x += b;
		}
	}

	for (i=0; i<D; i++)
	{
		if (pkt[i].y == 0 && pkt[i].x == 0)
			printf("studnia\n");

		else if (pkt[i].y > 0)
		{
			printf("0 %i\n", pkt[i].y);
			if (pkt[i].x > 0)
				printf("3 %i\n", pkt[i].x);
			if (pkt[i].x < 0)
				printf("2 %i\n", -pkt[i].x);
		}

		else if (pkt[i].y < 0)
		{
			printf("1 %i\n", -pkt[i].y);
			if (pkt[i].x > 0)
				printf("3 %i\n", pkt[i].x);
			if (pkt[i].x < 0)
				printf("2 %i\n", -pkt[i].x);
		}

		else if (pkt[i].y == 0 && pkt[i].x != 0)
		{
			if (pkt[i].x > 0)
				printf("3 %i\n", pkt[i].x);
			else
				printf("2 %i\n", -pkt[i].x);
		}
	}
	free(N);
	return 0;
}
