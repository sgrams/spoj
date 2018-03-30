#include <stdio.h>
#include <stdlib.h>

int colIt(int);
int main(void)
{
	int i, *s, t, tmp;
	
	scanf("%d", &t);
	
	if(t>=1)
	{
		s = malloc(t * sizeof *s );

		for (i=0; i<t; i++)
		{
			scanf("%d", &tmp);
			if(tmp>=1 && tmp<=10000)
			{
				*(s+i)=tmp;
			}
		}
		for (i=0; i<t; i++)
		{
			if(*(s+i)>=1 && *(s+i)<=10000)
				printf("%d\n", colIt(*(s+i)));
		}
	}

	free(s);
	return 0;
}
int colIt(int s)
{ 
	unsigned int n;
	for (n=0; s!=1; n++)
	{
		if(s%2!=0)
			s=3*s+1;
		else	
			s=s/2;
	}	
	return n;
}
