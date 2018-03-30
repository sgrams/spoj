#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void palindrom (int x, int licz);
int miejsca (int n);
int odwroc (int x);
int main (void)
{
	int i, t, *n;

	scanf("%i", &t);
	if (t < 1 || t > 80)
		return EXIT_FAILURE;
	n = malloc (t * sizeof(int));

	for (i=0; i<t; i++)
	{
		scanf("%i", &n[i]);
	}
	for (i=0; i<t; i++)
	{
		palindrom(n[i], 0);
	}

	free(n);
	return 0;
}
void palindrom (int x, int licz)
{
	while (x != odwroc(x))
	{
		x+=odwroc(x);
		licz++;
	}

	printf("%d %d\n", x, licz);
}

int miejsca (int n)
{
	if (n < 10) return 1;
	if (n < 100) return 2;
	if (n < 1000) return 3;
	if (n < 10000) return 4;
	if (n < 100000) return 5;
	if (n < 1000000) return 6;
	if (n < 10000000) return 7;
	if (n < 100000000) return 8;
	if (n < 1000000000) return 9;
	return 10;
}

int odwroc (int x)
{
	int i, j, odwrot;
	char *tmp, *tmp1;

	tmp = malloc(miejsca(x) * sizeof(char) + 1);
	tmp1 = malloc(miejsca(x) * sizeof(char) + 1);
	sprintf(tmp, "%d", x);

	for (i=0, j=strlen(tmp)-1; i<strlen(tmp); i++, j--)
	{
		tmp1[i] = tmp[j];
	}
	
	odwrot = strtol(tmp1, (char **) NULL, 10);
	free(tmp);
	free(tmp1);
	return odwrot;
}
