#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	int i, j, n, test, tmp;
	int *tab, *wyn;
	double srednia, suma;

	scanf("%d", &test);
	wyn = malloc(test * sizeof(wyn));

	if (test>0 && test <=100)
	{
		for (i=0; i<test; i++)
		{
			scanf("%d", &n);
			if(n>0 && n<100)
			{
				tab = malloc(n * sizeof(tab));
				suma = 0, srednia = 0;
				for (j=0; j<n; j++)
				{
					scanf("%d", &tmp);
					if(tmp>0 && tmp<=100)
					{
						*(tab+j) = tmp;
						suma = suma + *(tab+j);
					}
				}
				
				srednia = suma / n;
				for (j=0; j<n; j++)
				{
					if ((srednia - floor(srednia)) == 0.5 && ((ceil(srednia) == *(tab+j)) || floor(srednia) == *(tab+j)))
						*(wyn+i) == *(tab+j);
					else if (roundf(srednia) == *(tab+j))
						*(wyn+i) == *(tab+j);
					else if (:)
						*(wyn+i) == *(tab+j);
				}
				*(wyn+i) = *(tab+j);
				free(tab);
			}
		}

		for (i=0; i<test; i++)
		{
			printf("%d\n", *(wyn+i));
		}
	}

	free(wyn);
	return 0;
}
