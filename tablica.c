/* (c) sjg / http://pl.spoj.com/problems/TABLICA/ (rozwiazane przy pomocy stosu) */

#include <stdio.h>
#include <stdlib.h>

typedef struct stos
{
	int klucz;
	struct stos *poprzedni;
} stos;

void wrzuc (stos **gora, int liczba)
{
	stos *nowy;
	nowy = (stos *) malloc(sizeof(stos));
	nowy->klucz = liczba;
	nowy->poprzedni=NULL;
	if(*gora == NULL)
		*gora = nowy;
	else
	{
		nowy->poprzedni=*gora;
		*gora = nowy;
	}
}

int usun (stos **gora)
{
	stos *tmp;
	int liczba = 0;
	if (*gora == NULL)
		printf("Koniec stosu\n");
	else
	{
		tmp = *gora;
		(*gora) = (*gora)->poprzedni;
		liczba = (*gora)->klucz;
		free(tmp);
	}
	return liczba;
}

void pokaz (stos *gora)
{
	while (gora != NULL)
	{
		printf("%d ", gora->klucz);
		gora = gora->poprzedni;
	}
}
int main (void)
{
	int A;
	stos *stack = NULL;

	while(scanf("%d", &A) != EOF)
	{
		wrzuc(&stack, A);
	}
	
	pokaz(stack);
	return 0;
}
