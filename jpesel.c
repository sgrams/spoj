#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i, j, t, tmp;
	char **d;

	scanf("%i", &t);

	if (t>100 && t<1)
		return 1;
	
	d = malloc(t*sizeof(char *));
	for (i=0; i<t; i++)
	{
		d[i] = (char *)malloc(12*sizeof(char));
	}

	for (i=0; i<t; i++)
	{
		scanf("%s", d[i]);
	}

	for (i=0; i<t; i++)
	{
		tmp = 0;
		for (j=0; j<11; j++)
		{
			if (j == 0 || j == 4 || j == 8 || j== 10)
				tmp += ((d[i][j] + 48) * 1);
			else if (j == 1 || j == 5 || j == 9)
				tmp += ((d[i][j] + 48) * 3);
			else if (j == 2 || j == 6)
				tmp += ((d[i][j] + 48) * 7);
			else if (j == 3 || j == 7)
				tmp += ((d[i][j] + 48) * 9);
		}

		if (tmp%10 == 0)
			printf("D\n");
		else
			printf("N\n");
	}

	for (i=0; i<t; i++)
	free(d[i]);
	free(d);
	return 0;
}
