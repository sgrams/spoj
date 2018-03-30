#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	int i, Z, *d, *n, tmp1, tmp2;
	double pi = acos(-1.0);
	scanf("%d", &Z);
	d = malloc(Z * sizeof(d));
	n = malloc(Z * sizeof(n));

	if(Z>=1 && Z<=100000)
	{
		for(i=0; i<Z; i++)
		{
			scanf("%d %d", &tmp1, &tmp2);
			if(tmp1 <= 100000000 && tmp1 >= 10 && tmp2 >= 3 && tmp2 <= 1000000)
			{
				*(d+i) = tmp1;
				*(n+i) = tmp2;
			}
		}
		for(i=0; i<Z; i++)
		{
			if(*(d+i) <= 100000000 && *(d+i) >= 10 && *(n+i) >= 3 && *(n+i) <= 1000000)
			{
				if (*(n+i)%2==0)
					printf("%.3lf %.0lf\n", (pi * *(d+i) / *(n+i)), *(n+i)/2.0);
				else
					printf("%.3lf %d\n", (pi * *(d+i) / (2 * *(n+i))), *(n+i));
			}
		}
	}
	free(d);
	free(n);
	return 0;
}
