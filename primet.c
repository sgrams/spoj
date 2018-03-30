#include <stdio.h>

int czyPierwsza (unsigned int);
int main (void)
{
	unsigned int a, i, n[100000], tmp;
	scanf("%u", &a);
	if(a<100000)
	{
		for (i=0; i<a; i++)
		{
			scanf("%u", &tmp);
			if(tmp<=10000 && tmp >= 1)
				n[i]=tmp;
		}
		for(i=0; i<a; i++)
		{
			if(czyPierwsza(n[i]) == 1)
				printf("TAK\n");
			else
				printf("NIE\n");
		}
	}
	return 0;
}

int czyPierwsza (unsigned int n)
{
	int i, tmp = 0;
	if(n>=2)
	{
		for (i=2; i<=n; i++)
		{
			if(n%i==0 && n!=i)
			{
				return 0;
			}
			else
				tmp = 1;
		}
	}
	return tmp;
}
