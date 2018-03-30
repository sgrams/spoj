#include <stdio.h>
#include <stdlib.h>

int maxRek (int *tab, int n);
int glowa (int *tab);
int *ogon (int *tab, int n);

int main (void)
{
	int tabela[] = {1, 3, 5, 9, 2, 11, 4, 75};
	int n = 8;

	fprintf(stdout, "Maksymalna wartosc w tabeli to %d\n", maxRek(tabela, n));

	return 0;
}

int glowa (int tab[])
{
	return tab[0];
}
int *ogon (int tab[], int n)
{
	int i;
	int tab_nowa[n-1];
	for (i=0; *(tab+i+1)<n; i++)
	{
		tab_nowa[i] = tab[i+1];
	}
	return tab_nowa;
}
int maxRek (int tab[], int n)
{
	static int max = -1;
	if(max == -1)
		max = tab[0];
	else if (tab[n] > max)
	{
		printf("%d, tab[n] == %d", tab[0]);
		max = glowa(tab);
		n = n+1;
		maxRek(tab, n);
	}
	return max;
}
