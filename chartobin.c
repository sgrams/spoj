#include <stdio.h>
#include <stdlib.h>

void toBinary (int a);
int main (void)
{
	int i=0;
	char *tab = malloc(1);

	while ((*(tab+i)=getchar()) != EOF)
		i++;
	for (i=0; *(tab+i+1) != EOF; i++)
	{
		toBinary((int)*(tab+i));
		printf("\n");
	}

	free (tab);
	return 0;
}

void toBinary (int a)
{
	if (a == 0)
		printf("%d", a);
	else
	{
		toBinary(a/2);
		printf("%d", a%2);
	}
}
