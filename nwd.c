#include <stdio.h>
#include <stdlib.h>

int nwd(int, int);
int main(void){
	int i, t;
	int *a, *b;
	scanf("%d", &t);
	a = (int*) malloc(t*sizeof(*a));
	b = (int*) malloc(t*sizeof(*b));
	for(i=0; i<t; i++){
		scanf("%d %d", (a+i), (b+i));
	}
	for(i=0; i<t; i++){
		printf("%d\n", nwd(*(a+i), *(b+i)));
	}
	free(a);
	free(b);

	return 0;
}
int nwd(int a, int b){
	while(a!=b){
		if(a>b)
			a=a-b;
		else
			b=b-a;
		}
	return a;
}
