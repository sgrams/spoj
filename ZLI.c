#include <stdio.h>
#include <string.h>

static int counter[255] = {0};

int main(void)
{
	int a, b, i;
	char zdanie[200];
	char *tmp;

	scanf("%d\n", &a);

	if(a<=150){
		for(i=0; i<a; i++)
		{
			if(i==0)
				scanf("%[^\t\n]", zdanie);
			else
				scanf("\n%[^\t\n]", zdanie);
			tmp = zdanie;
			while(*tmp != 0)
			{
				b = *tmp;
				counter[b]=counter[b]+1;
				tmp++;
			}
			memset(zdanie, 0, 200*sizeof(*zdanie));
		}

		for(i='a'; i<='z'; i++){
			if(counter[i]>0)
				printf("%c %d\n", i, counter[i]);
		}
		for(i='A'; i<='Z'; i++)
		{
			if(counter[i]>0)
				printf("%c %d\n", i, counter[i]);
		}
	}
	return 0;
}
