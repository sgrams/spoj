#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i, j, C, tmp;
	char **tab;
	scanf("%i", &C);
	
	if (!(C>=1 && C<=50))
		return 1;

	tab = malloc(C * sizeof(char *));

	for (i=0; i<C; i++)
	{
		tab[i] = malloc(201 * sizeof(char));
		scanf("%s", tab[i]);
	}

	for (i=0; i<C; i++)
	{
		tmp = 1;
		for (j=0; tab[i][j] != '\0'; j++) /*  j=200 - ostatni znak;  j=201 - znak nowej linii */
		{
			if
			(tab[i][j] != tab[i][j+1] && tmp <= 2)
			{
				printf("%c", tab[i][j]);
				tmp = 1;
			}
			else if
			(tab[i][j] != tab[i][j+1] && tmp > 1)
			{
				printf("%i", tmp);
				tmp = 1;
			}
			else if
			(tab[i][j] == tab[i][j+1] && tmp == 1)
			{
				printf("%c", tab[i][j]);
				tmp++;
			}
			else if
			(tab[i][j] == tab[i][j+1] && tmp > 1)
			{
				tmp++;
			}

		}
		printf("\n");
	}

	for (i=0; i<C; i++)
		free(tab[i]);
	free(tab);
	return 0;
}
