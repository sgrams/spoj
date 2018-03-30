#include<stdio.h>
int main()
{
	int a,i,j;
	int N[1000],t[100000];
	float M[1000000000];
	scanf("%d", &a);
	
	for(i=0; i<a; i++){
		scanf("%d %f", &N[i], &M[i]);
		for(j=0; j<N[i]; j++){
			scanf("%d", &t[j]);
			printf("%d\n", j);
		}
		j=j+3;
		printf("%d\n", j);
	}
	return 0;
}
